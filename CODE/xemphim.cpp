#include<bits/stdc++.h>

using namespace std;

int n,c,b[20],a[20],k=0;

int quaylui(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n-1)
        {
            int tong=0;
            for(int j=0; j<n; j++)
            {
                tong=tong+ a[j]*b[j];
            }
            if(tong<=c && tong>k) k=tong;
        }
        else quaylui(x+1);
    }
    return 0;
}

int main()
{
    cin >> c >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    quaylui(0);
    cout << k << endl;
}
