#include<iostream>
#include<vector>

using namespace std;

bool chuaxet[1005] = {true};
int truoc[1005] = {0};

void DFS(int u, int v, vector <int> a[]){
    chuaxet[u] = false;
    for(int i=0; i<a[u].size(); i++){
        int k = a[u][i];
        if(chuaxet[k] == true){
            truoc[k] = u;
            DFS(k,v,a);
        }
    }
}

void DuongDi(int u, int v ){
    vector<int> a;
    int k = truoc[v];
    a.push_back(v);
    while (k != u)
    {
        a.push_back(k);
        k = truoc[k];
    }
    a.push_back(u);
    for(int i=a.size()-1; i>=0; i--) cout << a[i] << " ";
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int V,E,u,v;
        cin >> V >> E >> u >> v;
        vector <int> a[1005];
        for(int i=1; i<=E; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        for(int i=1; i<=V; i++){
            chuaxet[i] = true;
            truoc[i] = 0;
        } 
        DFS(u,v,a);
        DuongDi(u,v);
    }
}