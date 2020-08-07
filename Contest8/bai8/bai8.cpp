#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t; cin >> t; 
    while(t--){
        int n; cin >> n;
        queue <long long> q;
        long long k = 1;
        q.push(k);
        while(1){
            k = q.front();
            q.pop();
            if(k%n==0){
                cout << k << endl;
                break;
            }
            else{
                q.push(k*10);
                q.push(k*10+1);
            }
        }
    }
}