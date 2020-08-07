#include<iostream>
#include<algorithm>

using namespace std; 

int main(){
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int check[100005]={0};
        int k=0;
        for(int i=0; i<n; i++){
            int a; cin >> a;
            check[a]++;
            if(a>k) k = a;
        }
        for(int i=0; i<m; i++){
            int b; cin >> b;
            check[b]++;
            if(b>k) k=b;
        }
        for(int i=0; i<=k; i++){
            if(check[i]>0) cout << i << " ";
        }
        cout << endl;
        for(int i=0; i<=k; i++){
            if(check[i]>1) cout << i << " ";
        }
        cout << endl;
    }
}