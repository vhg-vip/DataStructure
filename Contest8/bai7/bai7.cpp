#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        queue <long long> q;
        long long k=1;
        q.push(k);
        int dem=0;
        while(k<=n){
            k = q.front(); q.pop();
            if(k<=n) dem++;
            q.push(k*10);
            q.push(k*10+1);
        }
        cout << dem << endl;
    }
}