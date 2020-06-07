#include <iostream>

using namespace std;
typedef long long ll;

bool solve(int n, ll a[]){
    bool check = true;
    for(int i=0; i<n/2; i++){
        if(a[i] != a[n-i-1]){
            check = false;
            break;
        }
    }
    return check;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[100];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(solve(n,a) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}