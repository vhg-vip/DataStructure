#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=1; i<=n; i++) a[i]=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(j%i==0){
                    if(a[j]==0) a[j]=1;
                    else a[j]=0;
                }
            }
        }
        int dem=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]==1) dem++;
        }
        cout << dem << endl;
        t--;
    }
}




