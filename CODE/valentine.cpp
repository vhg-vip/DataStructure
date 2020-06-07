#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], c[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        c[i]=1;
    }
    int b=0,den=0, trang=0, maxx=0;
    while(b<k)
    {
        den=0;
        trang=0;
        for(int i=0; i<n; i++) c[i]=1;
        for(int i=b; i<n; i+=k)
        {
            c[i]=0;
        }
        for(int i=0; i<n; i++)
        {
            if(c[i]==1)
            {
                if(a[i]==1) den++;
                if(a[i]==-1) trang++;
            }
        }
        if(abs(den-trang)>maxx) maxx= abs(den-trang);
        b++;
    }
    cout << maxx << endl;
    return 0;
}
