#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool chuaxet[1005];

void BFS(int u, vector <int> a[]){
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        cout << s << " ";
        for(int i=0; i<a[s].size(); i++){
            int k = a[s][i];
            if(chuaxet[k] == true){
                q.push(k);
                chuaxet[k] = false;
            }
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
            a[y].push_back(x);
        }
        for(int i=1; i<=v; i++) chuaxet[i] = true;
        
        BFS(u,a);
        cout << endl;
    }
}