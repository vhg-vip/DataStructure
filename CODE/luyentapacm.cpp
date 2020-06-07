#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[10000];
    int k=0;
    for(int i=0; i<3*n; i++) cin >> a[i];
    for(int i=0; i<3*n; i+=3)
    {
        int dem=0;
        for(int j=i; j<=i+2; j++)
        {
            if(a[j]==1) dem++;
        }
        if(dem>=2) k++;
    }
    cout << k << endl;
}
