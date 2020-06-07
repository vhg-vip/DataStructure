#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int k=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='0'){
            k=1;
            s.erase(s.begin()+i);
            break;
        }
    }
    if(k==0) s.erase(s.begin()+0);
    cout << s;
}
