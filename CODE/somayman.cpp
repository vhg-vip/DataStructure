#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if(a>b) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    for(int q=0; q<t; q++)
    {
        int n;
        cin >> n;
        int a[n],b[1005];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n, cmp);
        int k=0,s=0;
        for(int i=0; i<n; i++)
        {
            int dem=0;
            for(int j=i; j<n; j++)
            {
                if(a[j]==a[i]){
                    dem++;

                }
                else break;
            }
            if(dem>=k){
                k=dem;
                s=a[i];
            }
        }
        cout << s << endl;
    }
}
