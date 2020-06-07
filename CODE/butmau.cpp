#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    for(int i=0; i<4; i++) cin >> a[i];
    sort(a, a+4);
    int dem=0;
    for(int i=0; i<4; i++)
    {
        if(a[i]!=a[i+1]) dem++;
    }
    int res;
    res = 4-dem;
    cout << res << endl;
}
