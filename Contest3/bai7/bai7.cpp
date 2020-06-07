#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;
ll mod=1e9+7;

bool cmp(ll a, ll b){
    if(a>b) return true;
    else return false;
}

int main(){
    int t;
    cin >> t; 
    while(t--){
        int n;
        cin >> n;
        vector<ll> a;
        vector<ll> b;
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            a.push_back(k);
        }
        for(int i=0; i<n; i++){
            int k;
            cin >> k;
            b.push_back(k);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), cmp);
        ll res=0;
        for(int i=0; i<n; i++) {
            a[i] = a[i]%mod;
            b[i] = b[i]%mod;
            res += (a[i]*b[i])%mod;
        }
        cout << res << endl;
    }
}