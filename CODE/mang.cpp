#include<bits/stdc++.h>

using namespace std;

int uoc(int n)
{
    int dem=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            int k=n/i;
            if(k==i) dem++;
            else dem+=2;
        }
    }
    dem= dem *2;
    return dem;
}

int main()
{
    int n, m;
    cin >> n >> m;
    //cout << uoc(n);
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    while(m>0)
    {
        int c,l,r;
        cin >> c >> l >> r;
        if(c==1)
        {
            for(int i=l-1; i<=r-1; i++)
            {
                a[i]= uoc(a[i]);
            }
            //for(int i=0; i<n; i++) cout << a[i] << " ";
            //cout << endl;
        }
        else if(c==2)
        {
            int sum=0;
            for(int i=l-1; i<=r-1; i++) sum+=a[i];
            cout << sum << endl;
        }
        m--;
    }
    return 0;
}








