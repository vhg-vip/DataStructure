#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string gray="";
        gray = gray + s[0];
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='0') gray = gray + s[i+1];
            else if(s[i]=='1'){
                if(s[i+1]=='0') gray += '1';
                else gray += '0';
            }
        }
        cout << gray << endl;
    }
}