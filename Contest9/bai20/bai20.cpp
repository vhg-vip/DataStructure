#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool chuaxet[1004] = {true};

void Reset(int V){
    for(int i=1; i<=V; i++){
        chuaxet[i] = true;
    }
}

void BFS(int u, vector <int> ke[]){
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i=0; i<ke[s].size(); i++){
            int k = ke[s][i];
            if(chuaxet[k]==true){
                chuaxet[k]=false;
                q.push(k);
            }
        }
    }
}

int DemTPLT(vector <int> ke[], int V){
    int dem=0;
    for(int i=1; i<=V; i++){
        if(chuaxet[i]){
            dem++;
            BFS(i, ke);
        }
    }
    return dem;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        vector <int> ke[1004];
        int V,E;
        cin >> V >> E;
        for(int i=0; i<E; i++){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        // for(int i=1; i<=V; i++){
        //     for(int j=0; j<ke[i].size(); j++){
        //         cout << ke[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        Reset(V);
        int soTPLT = DemTPLT(ke,V);
        for(int i=1; i<=V; i++){
            chuaxet[i] = false;
            int dem = DemTPLT(ke,V);
            if(dem > soTPLT){
                cout << i << " ";
            }
            Reset(V);
        }
        cout << endl;
    }
}