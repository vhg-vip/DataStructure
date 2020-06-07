#include<iostream>
#include<stack>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        stack <char> st;
        bool check = true;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                if(st.top() != '('){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
            else if(s[i] == ']'){
                if(st.top() != '['){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
            else if(s[i] == '}'){
                if(st.top() != '{'){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
        }
        if(!st.empty()) check = false;
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}