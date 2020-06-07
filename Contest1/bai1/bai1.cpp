#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t>0)
    {
        string s;
        cin >> s;
        bool check = true;
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]=='0'){
                check = false;
                for(int j=i; j<s.length(); j++){
                    if(s[j]=='0') s[j]='1';
                    else if(s[j]=='1') s[j]='0';
                }
                break;
            }
        }
        if(check==false) cout << s << endl;
        else
        {
            for(int i=0; i<s.length(); i++) cout << "0";
            cout << endl;
        }
        
        t--;
    }
    
}