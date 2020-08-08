#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int snt[1000002];

void snto(int n){
    for(int i=0; i<=n; i++) snt[i] = true;
    snt[0] = false;
    snt[1] = false;
    for(int i=2; i<sqrt(n); i++){
        if(snt[i]==true){
            for(int j=i*i; j<=n; j+=i){
                snt[j] = false;
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        snto(n);
        bool check = false;
        int a,b;
        for(int i=0; i<n; i++){
            if(snt[i]==true && snt[n-i]==true){
                a=i;
                b=n-i;
                check = true;
                break;
            }
        }
        if(check) cout << a << " " << b << endl;
        else cout << -1 << endl;
    }
}