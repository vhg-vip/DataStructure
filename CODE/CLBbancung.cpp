#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    long long tong=0,s=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++)
    {
        tong=0;
        for(int j=i+1; j<n; j++)
        {
            tong+=a[j];
        }
        s+=a[i]*tong;
    }
    cout << s << endl;
}
