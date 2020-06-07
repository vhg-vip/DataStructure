#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[25];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n, cmp);
        long long so1=0, so2=0, x1=1, x2=1;
        for(int i=0; i<n; i++){
           if(i%2==0){
               so1 += a[i]*x1;
               x1 *= 10;
           }
           else{
               so2 += a[i]*x2;
               x2*=10;
           }
        }
        cout << so1+so2 << endl;
    }
}