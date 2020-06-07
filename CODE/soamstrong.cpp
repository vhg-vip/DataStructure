#include<bits/stdc++.h>

using namespace std;

int amstrong(int n)
{
    int m=n,k=n;
    int dem=0;
    while(n>0)
    {
        n/=10;
        dem++;
    }
    int s=0,a=0,b;
    while(m>0)
    {
        a=m%10;
        b=1;
        for(int i=0; i< dem; i++) b*=a;
        s+=b;
        m/=10;
    }
    if(s==k) return 1;
    else return 0;
}

int main()
{
    long long a,b;
    cin >> a >> b;
    int kt=0;
    for(long long i=a+1; i<b; i++)
    {
        if(amstrong(i)==1){
            cout << i << " ";
            kt=1;
        }
    }
    if(kt==0) cout << 0 << endl;
    return 0;
}
