#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[11], b[11], c[11];
    for(int i=0; i<10; i++) cin >> a[i];
    for(int i=0; i<10; i++)
    {
        b[i]= a[i]%42;
        c[i]= 0;
    }
    sort(b, b+10);
    int dem=0;
    for(int i=0; i<10; i++)
    {
        if(b[i]!=b[i+1]) dem++;
    }
    cout << dem << endl;
}
