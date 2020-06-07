#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s=0,k=1, dem=0;
    while(n>s)
    {
        s+=k;
        n-=s;
        k++;
        dem++;
    }
    cout << dem << endl;
}
