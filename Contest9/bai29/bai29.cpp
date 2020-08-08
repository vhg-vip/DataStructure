#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int v,e;
        cin >> v >> e;
        vector <int> ke[1005];
        for(int i=0; i<e; i++){
            int a,b;
            cin >> a >> b;
            ke[a].push_back(b);
            ke[b].push_back(a);
        }
        int chan=0, le=0;
        for(int i=1; i<=v; i++){
            // cout << ke[i].size() << " ";
            int k = ke[i].size();
            if(k%2==0) chan++;
            else le++;
        }
        if(le==0) cout << 2 << endl;
        else if(le==2) cout << 1 << endl;
        else cout << 0 << endl;
    }
}