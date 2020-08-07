#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <string> st;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i] == '+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                string first = st.top(); st.pop();
                string second = st.top(); st.pop();
                string res = first + second + s[i];
                st.push(res);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top();
        cout << endl;
    }
}