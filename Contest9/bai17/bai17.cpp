#include<iostream>
#include<stack>
#include<vector>

using namespace std;

bool chuaxet[1005]={true};

void DFS(int u, vector <int> a[]){
    // cout << u << " ";
    chuaxet[u] = false;
    for(int i=0; i<a[u].size(); i++){
        int k = a[u][i];
        if(chuaxet[k]==true){
            chuaxet[k] = false;
            DFS(k,a);
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
        DFS(1,a);
        if(LienThongManh(V) == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}