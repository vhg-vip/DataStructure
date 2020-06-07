#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int q=0; q<t; q++)
    {
        string s;
        getline(cin, s);
        int n=s.length();
        s=s+s[0];
        for(int i=0; i<n+1; i++)
        {
            if(s[i]!=' '){
                s[i]=s[i+1];
            }
            else s[i-1]=s[i+1];

        }
        s.erase(n,1);
        s=s+ "ee";
        if(s[0]>='a' && s[0]<='z') s[0]= s[0]- 'a' + 'A';
        for(int i=1; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]= s[i]- 'A' + 'a';
        }
        cout << s << endl;
    }
}
