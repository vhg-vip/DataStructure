#include<bits/stdc++.h>

using namespace std;

int tinhtong(int n, int a[])
{
    int t=a[0];
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1]) t= t+ (a[i]-a[i+1]);
        else t=t+(a[i+1]-a[i]);
    }
    return t;
}

bool cmp(int a, int b)
{
    if(a>b) return true;
    return false;
}
void in(int n, int a[])
{
    for(int i=0; i<n; i++)
        cout << a[i];
        cout << endl;

}

int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++) b[i]=a[i];
    int tong=0;
    tong+= tinhtong(n,a);
    while(1)
    {
        int i;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]==b[0]) return 0;
            if(a[i-1]<a[i]) break;
        }
        for(int j=n-1; j>=i; j--)
        {
            if(a[j]>a[i-1])
            {
                swap(a[j],a[i-1]);
                sort(a+i, a+n, cmp);
                in(n,a);
                break;
            }
        }
    }
    cout << tong << endl;
}
