#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if(a>b) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];
    for(int i=0; i<n; i++) c[i]=0;
    sort(a, a+n, cmp);
    sort(b, b+n, cmp);
    int dem=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(c[j]==0){
                if(b[i]>a[j]){
                    dem++;
                    c[j]=1;
                    break;
                }
            }
        }
    }
    cout << dem << endl;
}
