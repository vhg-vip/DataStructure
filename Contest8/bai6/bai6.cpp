#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        queue <long long> q;
        long long k = 9;
        q.push(k);
        while (1){
            k = q.front();
            q.pop();
            if(k%n==0) break;
            else{
                q.push(k*10);
                q.push(k*10+9);
            }
        }
        cout << k << endl;
    }
}