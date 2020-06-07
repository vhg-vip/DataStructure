#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

void solve(int n, int k, int a[]){
    sort(a,a+n);
    int so1=0, so2=0;
    for(int i=0; i<k; i++){
        so1+=a[i];
    }
    for(int i=k; i<n; i++){
        so2+=a[i];
    }
    cout << abs(so1-so2) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[100];
        for(int i=0; i<n; i++) cin >> a[i];
        solve(n,k,a);
    }
}