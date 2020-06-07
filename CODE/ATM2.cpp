#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    if(a>b) return true;
    return false;
}

int main()
{
    int n,s;
    cin >> n >> s;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, cmp);
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(s==0) break;
        else if(s>=a[i]){
            dem++;
            s-=a[i];
        }
    }
    cout << dem << endl;
}
