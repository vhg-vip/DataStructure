#include<iostream>

using namespace std;

void solve(int n, int k){
    int a[1005],b[1005];
    bool check = true;
    for(int i=1; i<=k; i++){
        cin >> a[i];
        b[i] = a[i];
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
        int dem=k;
        for(int i=1; i<=k; i++){
            for(int j=1; j<=k; j++){
                if(a[i]==b[j]) dem--;
            }
        }
        cout << dem << endl;
    }
    else
    {
        cout << k << endl;
        
    }
    
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