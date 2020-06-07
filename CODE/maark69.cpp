#include<bits/stdc++.h>

using namespace std;

int main()
{
    int64_t a,b,x;
    cin >> a >> b >> x;
    int64_t dau=0, cuoi=1000000000000000000, giua=(dau+cuoi)/2;
    double s;
    int64_t n=0;
    while(dau<=cuoi)
    {
        giua=(dau+cuoi)/2;
        s= a*pow(giua,1.0/3) + b* sqrt(giua);

        if(s<x){
           n=giua;
           dau=giua+1;
        }
        else{
             cuoi=giua-1;
        }
    }
    cout << n+1 << endl;
}
