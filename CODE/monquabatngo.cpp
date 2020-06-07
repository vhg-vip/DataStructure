#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int64_t n,m;
        cin >> n >> m;
        if (m == 0 || n==0) cout << 0 << endl;
        else if(n<=m) cout << n << endl;
        else
        {
            int64_t dem=0, l=1, r=n, g=(l+r)/2;
            while(l!=g && r!=g)
            {
                if(n-((g*(g+1))/2)*m<0) r=g;
                else l=g;
                g=(l+r)/2;
            }
            cout << g << " ";
            n= n-m*((g*(g+1))/2);
            dem= g*m;
            g++;
            cout << g << " ";
            dem += n/g;
            cout << dem << endl;
        }
    }
    return 0;
}
