#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a,b,c;
    cin >> a >> b;
    c="";
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
        {
            if(a[i]=='K') c+='B';
            else if(a[i]=='G') c+='K';
            else if(a[i]=='B') c+='G';
        }
        else
        {
            if(a[i]=='K')
            {
                if(b[i]=='B') c+='B';
                else if(b[i]=='G') c+='K';
            }
            else if(a[i]=='B')
            {
                if(b[i]=='K') c+='B';
                else if(b[i]=='G') c+='G';
            }
            else if(a[i]=='G')
            {
                if(b[i]=='B') c+='G';
                else if(b[i]=='K') c+='K';
            }
        }
    }
    cout << c << endl;
    return 0;
}
