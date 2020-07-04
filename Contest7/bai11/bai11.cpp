#include<iostream>
#include<stack>
#include<string>

using namespace std;

int check(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    return 0;
}

void solve(string s){
    stack <char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            if(st.empty()) st.push(s[i]);
            else{
                if(check(st.top()) >= check(s[i])){
                    cout << st.top();
                    st.pop();
                    st.push(s[i]);
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        else if(s[i] == ')'){
            char x = st.top();
            st.pop();
            while(x != '('){
                cout << x;
                x = st.top();
                st.pop();
            }
        }
        
    }
    while(!st.empty()){
        if(st.top() != '(')
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
    }
}