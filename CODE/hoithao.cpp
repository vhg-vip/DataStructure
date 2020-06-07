#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int nam=0, nu=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A') nam++;
        else nu++;
    }
    if(nam!=nu) cout << "NO" << endl;
    else
    {
        if(s[0]=='B') cout << "NO" << endl;
        else if(s[s.length()-1]=='A') cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
