#include<iostream>
#include<stack>
#include<string>

using namespace std;

void solve(string s){
    stack <int> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '(') st.push(i);
        else if(s[i] == ')'){
            if(st.size() > 0){
                int k = st.top(); 
                st.pop();
                if(s[k-1] == '-'){
                    for(int j=k; j<=i; j++){
                        if(s[j] == '+') s[j] = '-';
                        else if(s[j] == '-') s[j] = '+';
                    }
                }
            }
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i] != '(' && s[i] != ')') cout << s[i];
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