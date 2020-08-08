#include<iostream>
#include<vector>

using namespace std;

bool chuaxet[1005];
int dem = 0;

void KhoiTao(int v){
    for(int i=1; i<=v; i++) chuaxet[i] = true;
    dem = 0;
}

void DFS(int u, vector <int> ke[]){
    chuaxet[u] = false;
    dem++;
    for(int i=0; i<ke[u].size(); i++){
        int v = ke[u][i];
        if(chuaxet[v] == true){
            DFS(v,ke);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int v;
        cin >> v;
        vector <int> ke[1005];
        for(int i=1; i<v; i++){
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        KhoiTao(v);
        DFS(1, ke);
        if(dem == v) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}