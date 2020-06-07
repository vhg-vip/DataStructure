#include<bits/stdc++.h>

using namespace std;

int main()
{
    long n,m;
    cin >> n >> m;
    long a[n],f[10000];
    for(long i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    long k=0, h, tong=0, res;
    for(int i=a[0]; i<=m; i++)
    {
        if(k<n && i>=a[k+1]) k++;
        f[i]=a[k];
    }
    for(long i=0; i<n; i++)
    {

        for(long j=i+1; j<n; j++)
        {
            k= m-a[i]-a[j];
            if(k<1) continue;
            k=f[k];
            if(k<=a[j]) continue;
            res= max(res, k+a[i]+a[j]);
        }

    }
    cout << res << endl;
}
