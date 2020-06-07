#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int n=0,m=0;
    while(a>0)
    {
        n*=10;
        int k=a%10;
        n+=k;
        a/=10;
    }
    while(b>0)
    {
        m*=10;
        int h=b%10;
        m+=h;
        b/=10;
    }
    if(n>m) cout << n;
    else cout << m;
    return 0;
}
