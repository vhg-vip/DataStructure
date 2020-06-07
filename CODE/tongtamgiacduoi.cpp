#include<bits/stdc++.h>

using namespace std;

int snt(int a)
{
    if(a<2) return 0;
    else
    {
        for(int i=2; i<=sqrt(a); i++)
        {
            if(a%i==0) return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    int tong=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>=j)
            {
                if(snt(a[i][j])==1){
                    tong+=a[i][j];
                }
            }
        }
    }
    cout << tong << endl;
}
