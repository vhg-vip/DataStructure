#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int snt(int n)
{
   if(n<2) return 0;
   else
   {
       for(int i=2; i<=sqrt(n); i++)
       {
           if(n%i==0) return 0;
       }
       return 1;
   }
}

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    int c=n,d=0, dem=1;
    int nt[100000];
    int k=1;
    for(int i=1; i<100000; i++)
    {
        if(snt(i)==1)
        {
            nt[k]=i;
            k++;
            //cout << i << " ";
        }
    }
    //for(int i=2; i<100; i++) cout << nt[i] << " ";

    while(dem<=n*n)
    {
        for(int j=d; j<c; j++)
        {
            a[d][j]=nt[dem];
            dem++;
        }
        for(int i=d+1; i<c; i++)
        {
            a[i][c-1]=nt[dem];
            dem++;
        }
        for(int j=c-2; j>=d; j--)
        {
            a[c-1][j]=nt[dem];
            dem++;
        }
        for(int i=c-2; i>=d+1; i--)
        {
            a[i][d]=nt[dem];
            dem++;
        }
        d++;
        c--;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
