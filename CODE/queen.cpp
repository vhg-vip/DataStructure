#include<bits/stdc++.h>

using namespace std;

int n,cot[200]={0}, cheo1[200]={0},cheo2[200]={0}, dem=0;

void dequy(int x)
{
    if(x==n+1)
    {
        dem++;
    }
    for(int i=1; i<=n; i++)
    {
        if(cot[i]==0 && cheo1[x+i]==0 && cheo2[x-i+n]==0)
        {
            cot[i]=1;
            cheo1[x+i]=1;
            cheo2[x-i+n]=1;
            dequy(x+1);
            cot[i]=0;
            cheo1[x+i]=0;
            cheo2[x-i+n]=0;
        }
    }
}

int main()
{
    cin >> n;
    dequy(1);
    cout << dem << endl;
    return 0;
}
