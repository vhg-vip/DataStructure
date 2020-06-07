#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int x[n],y[m];
    for(int i=0; i<n; i++) cin >> x[i];
    for(int i=0; i<m; i++) cin >> y[i];
    long vt1=0,vt2=0,val1=x[0],val2=y[0],res=0;

    while(vt1<n && vt2 <m)
    {

        if(val1==val2){
            res++;
            vt1++, vt2++;
            val1+= x[vt1];
            val2+= y[vt2];
        }
        else if(val1<val2){
            vt1++;
            val1+= x[vt1];
        }
        else if(val1>val2){
            vt2++;
            val2+= y[vt2];
        }

    }
    cout << res;
    return 0;
}
