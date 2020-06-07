#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,a[55],i,res=0;
    cin >> n >> k;
    for (i=1; i<=n; i++) cin >> a[i];

    if (a[k]>0)
    {
        for (i=1; i<=n; i++)
            if (a[k]<=a[i]) res++;
    }
    else
    {
        for (i=1; i<=n; i++)
            if (a[i]>0) res++;
    }
    cout << res << endl;
}
