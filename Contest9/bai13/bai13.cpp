#include<iostream>
#include<queue>
#include<vector>

using namespace std;

bool chuaxet[1005] = {true};
int truoc[1005] = {0};

void BFS(int u, vector <int> a[]){
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        // cout << s << " ";
        for(int i=0; i<a[s].size(); i++){
            int k = a[s][i];
            if(chuaxet[k] == true){
                // cout << k << " ";
                q.push(k);
                chuaxet[k] = false;
                truoc[k] = s;
            }
        }
    }
}

void DuongDi(int u, int v ){
    vector<int> a;
    int k = truoc[v];
    if(k == 0){
        cout << -1 << endl;
        return;
    }
    a.push_back(v);
    while (k != u){
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
        for(int i=0; i<E; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for(int i=1; i<=V; i++){
            chuaxet[i] = true;
            truoc[i] = 0;
        }
        BFS(u,a);
        DuongDi(u,v);
    }
}