#include<iostream>
#include<queue>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        int dem[100]={0};
        for(int i=0; i<s.length(); i++){
            dem[s[i]]++;
        }
        priority_queue <int> q;
        for(int i=0; i<100; i++){
            q.push(dem[i]);
        }
        while(k--){
            int k = q.top()-1;
            q.pop();
            q.push(k);
        }
        long long sum = 0;
        while(!q.empty()){
            int k=q.top();
            sum = sum + pow(k,2);
            q.pop();
        }
        cout << sum << endl;
    }
    

}