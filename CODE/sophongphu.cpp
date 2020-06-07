#include<iostream>
#include<algorithm>

using namespace std;

int a[1000000];
void timuoc(int n)
{
    a[0]=0;
    for(int i=1; i<=n; i++) a[i]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n/i; j++)
        {
            a[i*j]+=i;
        }
    }
};

int main()
{
    int l,r;
    cin >> l >> r;
    int dem=0;
    timuoc(r);
    for(int i=l; i<=r; i++)
    {
        if(a[i]-i>i) dem++;
    }
    cout << dem << endl;
}
