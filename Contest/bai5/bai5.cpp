#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    int a,b,c;
    a = s[0] - '0';
    b = s[4] - '0';
    c = s[8] - '0';
    if(a+b==c) cout << "YES" << endl;
    else cout << "NO";
}