#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--){
        string s;
        cin >> s;
        int k = s.length();
        if(s[0] == s[k-1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}