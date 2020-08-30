#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        queue <int> q;
        int n;
        cin >> n;
        q.push(9);
        int k = q.front();
        while(k%n != 0){
            k=q.front();
            q.pop();
            if(k%n == 0){
                cout << k << endl;
                break;
            }
            q.push(k*10+0);
            q.push(k*10+9);
        }
    }
}