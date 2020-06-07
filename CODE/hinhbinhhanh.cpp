#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m+n; j++)
        {
            if(j<i) cout << "~";
            else if(j>i && j<m+i+1)
            {
                if(i==0 || i==n-1 || j==i+1 || j==m+i) cout << "*";
                else cout << ".";
            }
            else if(j>m) cout << " ";

        }
        cout << endl;
    }
}
