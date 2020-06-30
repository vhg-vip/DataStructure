#include<iostream>
#include<vector>

using namespace std;

bool chuaxet[1005];

void DFS(int u, vector <int> a[], int v){
    chuaxet[u] = false;
    cout << u << " ";
    for(int i=0; i<a[u].size(); i++){
        int k = a[u][i];
        if(chuaxet[k] == true){
            DFS(k, a, v);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int v,e,u;
        cin >> v >> e >> u;
        vector <int> a[1005];
        for(int i=1; i<=e; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            // a[y].push_back(x);
        }
        for(int i=1; i<=v; i++) chuaxet[i] = true;
        
        DFS(u, a, v);
        cout << endl;
    }
}