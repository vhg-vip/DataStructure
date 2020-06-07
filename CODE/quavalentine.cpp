#include<bits/stdc++.h>

using namespace std;

struct qua
{
    int p,d;
};

bool cmp(qua a, qua b)
{
    if(a.p<b.p || (a.p==b.p && a.d>b.d)) return true;
    return false;
}

int main()
{

    int t;
    cin >> t;
    for(int q=0; q<t; q++)
    {
        int n,h;
        cin >> n >> h;
        qua a[10000];
        int b[10000];
        for(int i=0; i<n; i++){
            cin >> a[i].p >> a[i].d;

        }

        int dem=0;
        for(int i=0; i<n; i++)
        {
            b[i]= h- a[i].p + a[i].d;
            cout << b[i] << " ";
        }
        max(b, n-1);
       // if(dem==n) cout<< "YES" << endl;
      //  else cout << "NO" << endl;
    }
}
