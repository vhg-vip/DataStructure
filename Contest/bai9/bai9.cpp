#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool check1 = true, check2 = true;
        for(int i=0; i<s.length()-1; i++){
            int a = s[i] -'0';
            int b = s[i+1] - '0';
            // cout << a << " ";
            if(b<a){
                check1 = false;
                // cout << a << " " << b << " " << check1 << endl;
            }
            if(b>a) check2 = false;
        }
        if(!check1  && !check2){
            // cout << check1 <<" " << check2;
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
}