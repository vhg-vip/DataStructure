#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
    long n,m;
    cin >> n >> m;
    long a[n], b[m];

    for(long i=0; i<n; i++) cin >> a[i];
    for(long i=0; i<m; i++) cin >> b[i];
    sort(a, a+n);
    long k=0, dem=0,res;

    for(long i=0; i<m; i++)
    {
        long dau=0, cuoi=n-1, giua=(dau+cuoi)/2;
        k=b[i];
        if(k<a[0]){
            cout << 0 << endl;
        }
        else{
            while(dau<=cuoi)
            {
                giua=(dau+cuoi)/2;
                if(a[giua]<=k){
                    res=giua;
                    dau= giua+1;
                }
                else cuoi= giua-1;
            }
            cout << res+1 << endl;
        }
    }
}
