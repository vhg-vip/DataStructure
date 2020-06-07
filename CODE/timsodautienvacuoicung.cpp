#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[100];
    int k=0;
    while(n>0)
    {
        a[k]=(n%10)+ '0';
        k++;
        n/=10;
    }
    swap(a[0],a[k-1]);
    if(a[k-1]=='0')
    {
        for(int i=k-2; i>=0; i--) cout << a[i];
    }
    else
    {
        for(int i=k-1; i>=0; i--) cout << a[i];
    }
}
