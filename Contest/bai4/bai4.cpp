#include <iostream>
#include <math.h>

using namespace std;

typedef long long ll;

bool snt(int n){
    if(n<2) return false;
    else{
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
}

void solve(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(snt(i) == true && n%i == 0){
            int dem=0;
            while(n%i==0){
                n/=i;
                dem++;
            }
            cout << i << "(" << dem << ")" << " ";
        }
    }
    if(snt(n) == true) cout << n << "(" << 1 << ")";
}

int main(){
    int t;
    cin >> t;
    for(int k=1; k<=t; k++){
        ll n;
        cin >> n;
        cout << "Test " << k << ": ";
        solve(n);
        cout << endl;
    }
}