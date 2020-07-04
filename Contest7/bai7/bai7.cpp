#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <char> a;
        int d=0, m=0;
        int res;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                a.push(s[i]);
                m++;
            }
            else if(s[i] == ')'){
                d++;
            }
            if(!a.empty()){
                if(s[i] == ')' && a.top() == '('){
                    a.pop();
                    m--;
                    d--;
                }
            }
        }
        // cout << m << " " << d << endl;
        if(d==m) res = d;
        else if(m%2 == 0 && d%2 == 0) res = (m+d)/2;
        else if( m%2 == 1 && d%2 == 1) res = (m+d)/2+1;
        cout << res << endl;
    }
}