#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a[1002];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int x; cin >> x;
            if(x==1){
                a[i].push_back(j);
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<a[i].size(); j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}