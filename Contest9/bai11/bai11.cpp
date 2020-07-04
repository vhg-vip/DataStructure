#include<iostream>
#include<vector>
#include<stack>

using namespace std;

bool chuaxet[1005] = {true};
int truoc[1005] = {0};

void DFS(int u, int v, vector <int> a[]){
    stack <int> st;
    st.push(u);
    chuaxet[u] = false;
    while(!st.empty()){
        u = st.top(); st.pop();
        for(int i=0; i<a[u].size(); i++){
            int k=a[u][i];
            if(chuaxet[k] == true){
                st.push(u);
                st.push(k);
                truoc[k] = u;
                chuaxet[k] = false;
                break;
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
        for(int i=1; i<=E; i++){
            int x,y;
            cin >> x >> y;
            a[x].push_back(y);
        }
        for(int i=1; i<=V; i++){
            chuaxet[i] = true;
            truoc[i] = 0;
        } 
        DFS(u,v,a);
        DuongDi(u,v);
    }
}