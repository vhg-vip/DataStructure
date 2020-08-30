#include<iostream>
#include<queue>
#include<stack>

using namespace std;

int main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        queue <long long> q;
        stack <long long> st;
        q.push(6);
        q.push(8);
        long long max = 0;
        for(long long i=0; i<n; i++){
            max = max*10+8;
        }
        long long k=0;
        while(k<max){
            k = q.front();
            q.pop();
            if(k<=max) st.push(k);
            q.push(k*10+6);
            q.push(k*10+8);
        }
        while(!st.empty()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}