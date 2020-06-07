#include<bits/stdc++.h>

using namespace std;

int n,a[20],b[20],c[20],m;
int kt=0;

int quaylui(int x)
{
    for(int i=0; i<=1; i++)
    {
        c[x]=i;
        if(x==n-1)
        {
            for(int j=0; j<n; j++){
                if(c[j]==1) kt=1;
            }
            if(kt==1)
            {
                int chua=1, cay=0;
                for(int j=0; j<n; j++){
                    cay= cay + b[j]*c[j];
                    if(c[j]==1){
                        chua= chua*(a[j]*c[j]);
                    }
                }
                if(abs(chua-cay)<m) m= abs(chua-cay);
            }
        }
        else quaylui(x+1);
    }
    return 0;
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    m=abs(a[0]-b[0]);
    quaylui(0);
    cout << m << endl;
    return 0;
}
