#include<iostream>
#include<vector>

using namespace std;

bool chuaxet[1005];
bool check = false;

void KhoiTao(int v){
    for(int i=1; i<=v; i++) chuaxet[i] = true;
    check = false;
}

void DFS(int u, vector <int> ke[]){
    chuaxet[u] = false;
    for(int i=0; i<ke[u].size(); i++){
        int v = ke[u][i];
        if(chuaxet[v] == true) DFS(v,ke);
        else check = true;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int v,e;
        cin >> v >> e;
        vector <int> ke[1005];
        for(int i=0; i<e; i++){
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        KhoiTao(v);
        DFS(1, ke);
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}