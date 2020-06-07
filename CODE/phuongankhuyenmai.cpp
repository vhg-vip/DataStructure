#include<bits/stdc++.h>

using namespace std;

int loai1(int n)
{
    int a=0;
    while(n>0)
    {
        a=n%10;
        if(a==0) return 0;
        n=n/10;
    }
    return 1;
}

int loai2(int n)
{
    int a=0,b=n;
    while(n>0)
    {
        a+=n%10;
        n=n/10;
    }
    if(a%10==0) return 1;
    return 0;
}

int loai3(int n)
{
    int a=0 ,b=n;
    while(n>0)
    {
        a=a*10+(n%10);
        n=n/10;
    }
    if(a==b) return 1;
    return 0;
}

int main()
{
    int t,n,m,k;
    cin >> t;
    for(int q=0; q<t; q++)
    {
        cin >> n >> m >> k;
        int dem1=0,dem2=0,dem3=0;
        for(int i=100000; i<=999999; i++)
        {
            if(loai1(i) && loai2(i) && loai3(i)) dem1++;
            if(loai2(i) && loai3(i)) dem2++;
            if(loai3(i)) dem3++;
        }

        if(n<=dem1 && m<=dem2-n && k<=dem3-n-m) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
