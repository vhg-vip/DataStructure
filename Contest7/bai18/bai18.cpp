#include<iostream>
#include<stack>
#include<string>

using namespace std;

int toNumber(char c){
    int a = c - '0';
    return a;
}

int calculate(int a, int b, char c){
    int res;
    if(c == '+') res = a+b;
    else if(c == '-') res = a-b; 
    else if(c == '*') res = a*b;
    else if(c == '/') res = a/b;
    return res;
}

int check(char c){
    if(c == '*' || c == '/') return 2;
    else if (c == '+' || c == '-') return 1;
    return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack <char> st;
        stack <int> num;
        int res;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == '+' || s[i] == '-' || s[i]=='*' || s[i]=='/'){
                
                while(!st.empty() && check(s[i]) <= check(st.top()) && !num.empty()){
                    int x,y;
                    x = num.top(); num.pop();
                    y = num.top(); num.pop();
                    char c = st.top(); st.pop();
                    res = calculate(y,x,c);
                    num.push(res);
                }
                st.push(s[i]);

            }
            else if(s[i] == ')'){
                while(st.top() != '(' && !num.empty()){
                    int x,y;
                    x = num.top(); num.pop();
                    y = num.top(); num.pop();
                    char c = st.top(); st.pop();
                    res = calculate(y,x,c);
                    num.push(res);
                }
                st.pop();

            }
            else{
                int so = 0;
                int j=i;
                if(s[i+1]>='0' && s[i+1]<='9'){
                    while(s[j]>='0' && s[j]<='9'){
                        int k = s[j]-'0';
                        so = so*10 + k;
                        j++;
                    }
                    i=j-1;
                    num.push(so);
                }
                else{
                    int k = s[i]-'0';
                    num.push(k);
                }
                
            }
        }
        while(!st.empty() && !num.empty()){
            int x = num.top(); num.pop();
            int y = num.top(); num.pop();
            char k = st.top(); st.pop();
            res = calculate(y,x,k);
            num.push(res);
        }
        cout << num.top();
        cout << endl;
    }
}