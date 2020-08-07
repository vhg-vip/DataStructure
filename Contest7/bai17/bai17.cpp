#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <int> st;
        int res;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                if(s[i]=='+') res = x+y;
                else if(s[i] == '-') res = x-y;
                else if(s[i] == '*') res = x*y;
                else if(s[i] == '/') res = x/y;
                st.push(res);
            }
            else{
                int a = s[i] - '0';
                st.push(a);
            }
        }
        cout << st.top();
        cout << endl;
    }
}