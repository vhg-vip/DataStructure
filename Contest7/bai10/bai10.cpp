#include<iostream>
#include<stack>

using namespace std;

string change(string s){
    stack <int> st;
    string res ="";
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
        if(s[i] != '(' && s[i] != ')') res += s[i];
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        a = change(a);
        b = change(b);
        if(a == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}