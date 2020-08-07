#include<iostream>
#include<vector>
#include<stack>

using namespace std;

bool chuaxet[1005] = {true};

void DFS(int u, vector <int> a[]){
    chuaxet[u] = false;
    for(int i=0; i<a[u].size(); i++){
        int k = a[u][i];
        if(chuaxet[k] == true){
            DFS(k, a);
        }
    }
}

void DuyetTPLT(int V, vector <int> a[]){
    int dem = 0;
    for(int i=1; i<=V; i++){
        if(chuaxet[i] == true){
            dem++;
            DFS(i,a);
        }
    }
    cout << dem << endl;
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
            a[y].push_back(x);
        }
        for(int i=1; i<=V; i++) chuaxet[i] = true;
        DuyetTPLT(V,a);
    }
}