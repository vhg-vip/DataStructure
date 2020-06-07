#include<iostream>
#include<algorithm>

using namespace std;

int c,n,a[20],b[20],k=0;

int dequy(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n-1)
        {
            int tong=0;
            for(int j=0; j<n; j++)
            {
                tong=tong+a[j]*b[j];
            }
            if(tong<=c && k<tong) k=tong;
        }
        else dequy(x+1);
    }
    return 0;
}

int main()
{
    cin >> c >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    dequy(0);
    cout << k << endl;
}







