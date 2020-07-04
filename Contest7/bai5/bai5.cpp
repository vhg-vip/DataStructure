#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <int> a;
        int dem = 0;
        int res = 0;
        a.push(-1);
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(') a.push(i);
            else{
                a.pop();
                if(!a.empty()){
                    dem = i-a.top();
                    res = max(res, dem);
                }
                else{
                    a.push(i);
                }
            }
        }
        cout << res << endl;    
    }
}