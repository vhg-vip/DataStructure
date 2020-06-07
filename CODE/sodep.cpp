#include<iostream>
#include<math.h>

using namespace std;

int mu(int n)
{
    int t=1;
    for(int i=0; i<n; i++)
    {
        t*=10;
    }
    return t;
}

int thuannghich(int n)
{
    int m=n;
    int s=0;
    while(n>0)
    {
        s= s*10+(n%10);
        n/=10;
    }
    if(s==m) return 1;
    else return 0;
}

int tongchuso(int n)
{
    int s=0;
    while(n>0)
    {
        s=s+(n%10);
        n/=10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int dem=0;
    int a,b,k;
    a= mu(n-1);
    b= mu(n);
    for(int i=a; i<b; i++)
    {
        k= tongchuso(i);
        if(thuannghich(i)==1 && k%10==0) dem++;
    }
    cout << dem << endl;
}
