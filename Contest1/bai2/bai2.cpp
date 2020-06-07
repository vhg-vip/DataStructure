#include<iostream>

using namespace std;

void solve(int n, int k){
    int a[1005];
    bool check = true;
    for(int i=1; i<=k; i++){
        cin >> a[i];
    }
    for(int i=k; i>0; i--){
        if(a[i] != n-k+i){
            check = false;
            a[i] = a[i]+1;
            for(int j=i+1; j<=k; j++){
                a[j] = a[i] + j - i;
            }
            break;
        }
    }
    if(check==false){
        for(int i=1; i<=k; i++){
            cout << a[i] << " ";
        }
    }
    else
    {
        for(int i=1; i<=k; i++){
            cout << i << " ";
        }
    }
    
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        solve(n,k);
    }
    
}