#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int dem=0;
        for(int i=0; i<n; i++){
            int k; cin >> k;
            if(k==x) dem++;
        }
        if(dem==0) cout << -1 << endl;
        else cout << dem << endl;
    }
}