#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

void solve(int n){
    stack <int> q;
    while(n>0){
        int k = n%2;
        q.push(k);
        n = n/2;
    }
    while(!q.empty()){
        cout << q.top();
        q.pop();
    }
    cout << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i=1; i<=n; i++){
            solve(i);
        }
        cout << endl;
    }
}