#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int v,e;
        cin >> v >> e;
        vector <int> ra[1005];
        vector <int> vao[1005];
        for(int i=0; i<e; i++){
            int a,b;
            cin >> a >> b;
            ra[a].push_back(b);
            vao[b].push_back(a);
        }
        bool check = true;
        for(int i=1; i<=v; i++){
            // cout << ra[i].size() << " " << vao[i].size() << endl;
            int x = ra[i].size();
            int y = vao[i].size();
            if(x!=y){
                check = false;
                break;
            }
        }
        if(check) cout << 1 << endl;
        else cout << 0 << endl;
    }
}