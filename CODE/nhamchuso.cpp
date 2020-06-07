#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    char c[1000], d[1000];
    int k=0,k1=0,n=0,m=0,n1=0,m1=0;
    while(a>0){
        c[k]=(a%10)+'0';
        k++;
        a/=10;
    }
    for(int i=k-1; i>=0; i--)
    {
        if(c[i]=='6') c[i]='5';
        n= n*10+ (c[i]- '0');
    }
    while(b>0){
        d[k1]=(b%10)+'0';
        k1++;
        b/=10;
    }
    for(int i=k1-1; i>=0; i--)
    {
        if(d[i]=='6') d[i]='5';
        m= m*10+ (d[i]- '0');
    }
    int minn;
    minn=n+m;
    cout << minn << " ";
    for(int i=k-1; i>=0; i--)
    {
        if(c[i]=='5') c[i]='6';
        n1= n1*10+ (c[i]- '0');
    }
     for(int i=k1-1; i>=0; i--)
    {
        if(d[i]=='5') d[i]='6';
        m1= m1*10+ (d[i]- '0');
    }
    int maxx;
    maxx= n1+m1;
    cout << maxx << endl;
}
