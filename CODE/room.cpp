#include<bits/stdc++.h>

using namespace std;
struct dan
{
    int nguoi, dan, daibieu;
};

bool cmp(dan a, dan b)
{
    if(a.daibieu < b.daibieu) return true;
    return false;
}

int main()
{
    int n,m;
    cin >> n >> m;
    dan a[110];
    for(int i=0; i<n; i++) cin >> a[i].nguoi >> a[i].dan;
    for(int i=0; i<n; i++)
    {
        a[i].daibieu= a[i].nguoi - a[i]. dan;
    }
    sort(a, a+n, cmp);
    int dem=0;
    for(int i=0; i<n; i++)
    {
        if(a[i].daibieu < m && a[i].daibieu!=0 ){
            m-= a[i].daibieu;
            dem++;
        }
    }
    cout << dem << endl;
}
