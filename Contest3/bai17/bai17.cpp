#include<iostream>
#include<queue>
#include<vector>

using namespace std;

long long power(int n){
    return n*n;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        int dem[300]={0};
        int res=0;
        priority_queue< int, vector<int> > q;
        for(int i=0; i<s.length(); i++){
            dem[s[i]]++;
        }
        for(int i=0; i<300; i++){
            if(dem[i]>0) q.push(dem[i]);
        }
        while(k--){
            int tmp = q.top();
            q.pop();
            tmp--;
            q.push(tmp);
        }
        while(!q.empty()){
            res += power(q.top());
            // cout << q.top() << " ";
            q.pop();
        }
        cout << res << endl;
    }
}