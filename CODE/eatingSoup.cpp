#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin  >> n >> m;
    if(m==0) cout << 1 << endl;
    else if(n==m) cout << 0 << endl;
    else
    {
        int a[n]={0};
        int k=0;
        while(k<n && m!=0)
        {
            a[k]=1;
            m--;
            k+=2;
        }
        for(int i=0; i<n; i++) cout << a[i] << " ";
    }
}
