#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool chuaxet[1005]={true};

void BFS(int u, vector <int> a[]){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int s = q.front(); 
        q.pop();
        for(int i=0; i<a[s].size(); i++){
            int k = a[s][i];
            if(chuaxet[k]==true){
                chuaxet[k] = false;
                q.push(k);
            }
        }
    }
}

bool LienThongManh(int V){
    for(int i=1; i<=V; i++){
        if(chuaxet[i] == true) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int V,E;
        cin >> V >> E;
        vector <int> a[1005];
        for(int i=0; i<E; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for(int i=1; i<=V; i++) chuaxet[i] = true;
        BFS(1,a);
        if(LienThongManh(V) == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}