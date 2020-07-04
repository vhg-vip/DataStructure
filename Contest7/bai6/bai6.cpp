#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stack <char> a;
        bool check = false;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                a.push(s[i]);
            }
            else if(!a.empty()){ 
                if(s[i] == ')'){
                    if(a.top() == '+' || a.top() == '-' || a.top() == '*' || a.top() == '/'){
                        while(!a.empty() && a.top() != '('){
                            // cout << a.top() << " ";
                            a.pop();
                        }
                        if(a.top() == '(') a.pop();
                    }
                    else{
                        check = true;
                        break;
                    }
                }
            }
        }
        if(check == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}