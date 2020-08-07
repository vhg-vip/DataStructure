#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int V,E;
        cin >> V >> E;
        vector <int> ke[10005];
        for(int i=0; i<E; i++){
            int x,y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        bool check = true;
        for(int i=1; i<=V; i++){
            cout << ke[i].size() << " ";
            // if(ke[i].size()%2==1){
            //     check = false;
            //     break;
            // }
        }
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}