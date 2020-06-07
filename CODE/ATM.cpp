#include<bits/stdc++.h>

using namespace std;

int n,s,a[100],b[100],res=100;

int dequy(int x)
{
    int tong;
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n-1){
            int dem=0,kt=0;
            for(int j=0; j<n; j++){
                if(b[j]==1){
                    kt=1;
                    dem++;
                }
            }
            if(kt==1)
            {
                tong=0;
                for(int j=0; j<n; j++){
                    tong= tong+ a[j]*b[j];
                }
                if(dem<=res && tong==s) res=dem;
            }
        }
        else dequy(x+1);
    }
    return 0;
}

int main()
{
    cin >> n >> s;
    for(int i=0; i<n; i++) cin >> a[i];
    dequy(0);
    if(res==100) cout << -1 << endl;
    else cout << res << endl;
}
