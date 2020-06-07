#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        string s;
        cin >> s;
        if(s[0]=='#') break;
        else
        {
            int dem=0;
            int n=s.length();
            for(int i=0; i<n; i++)
            {
                if(s[i]=='A') dem++;
            }
            if(dem>=n/2 && n%2==0) cout << "need quorum" << endl;
            else if(dem>=n/2+1 && n%2==1) cout << "need quorum" << endl;
            else
            {
                int yes=0, no=0;
                for(int j=0; j<n; j++)
                {
                    if(s[j]=='Y') yes++;
                    if(s[j]=='N') no++;
                }
                if(yes>no) cout << "yes" << endl;
                else if(yes<no) cout << "no" << endl;
                else cout << "tie" << endl;
            }
        }
    }
}
