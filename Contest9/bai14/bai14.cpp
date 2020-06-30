#include<iostream>
#include<vector>
#include<stack>

using namespace std;

bool chuaxet[1005] = {true};
int truoc[1005] = {0};
bool check = false;

void KhoiTao(int V){
    for(int i=1; i<=V; i++){
        chuaxet[i] = true;
        truoc[i]=0;
    }
}

void DFS(int u, vector<int> a[]){
    chuaxet[u] = false;
    // cout << u << " ";
    for(int i=0; i<a[u].size(); i++){
        int k = a[u][i];
        if(chuaxet[k]==true){
            truoc[k] = u;
            DFS(k,a);
        }
    }
}

void DuongDi(int u, int v){
    int k = truoc[v];
    if(k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int V,E;
        cin >> V >> E;
        vector <int> a[1005];
        for(int i=0; i<E; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        int Q;
        cin >> Q;
        for(int i=0; i<Q; i++){
            int u,v;
            cin >> u >> v;
            KhoiTao(V);
            DFS(u,a);
            DuongDi(u,v);
        }
    }
}