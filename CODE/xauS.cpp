#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[200]={0};
    char b[200];
    char c='a';
    if(s.length()>26) cout << "IMPOSSIBLE";
    else
    {
        for(int i=97; i<123; i++)
        {
            b[i]=c;
            c++;
        }
        for(int i=0; i<s.length(); i++)
        {
            if(a[s[i]]==0)
            {
                //cout << s[i] << " ";
                a[s[i]]=1;
                b[s[i]]='0';
            }
            else
            {
                for(int j=97; j<123; j++)
                {
                    if(b[j]!='0')
                    {

                        s[i]=b[j];
                       // cout << b[j] << " ";
                        b[j]='0';
                        a[s[i]]=1;
                        break;
                    }
                }
            }
        }
        cout << s;
    }
}
