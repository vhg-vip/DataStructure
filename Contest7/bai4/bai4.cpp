#include<iostream>
#include<stack>
#include<string>

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
            else if(!st.empty()){
                if(s[i] == ')' && st.top() == '('){
                    st.pop();
                }
                else if(s[i] == ']' && st.top() == '['){
                    st.pop();
                }
                else if(s[i] == '}' && st.top() == '{'){
                    st.pop();
                }
                else{
                    check = false;
                    break;
                }
            }
            
        }
        if(!st.empty()) check = false;
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}