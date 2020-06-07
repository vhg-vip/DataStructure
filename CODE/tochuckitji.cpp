#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k;
    cin >> m >> n >> k;
    int dem=0;
    while(m>=2 && n>=1)
    {
        m-=2;
        n--;
        dem++;
    }
    if(m+n==0){
        while(k>0){
            dem--;
            k-=3;
        }
    }
    else if(m+n>0){
        if(m+n<k){
            k=k-(m+n);
            while(k>0){
                k-=3;
                dem--;
            }
        }
    }
    cout << dem << endl;
}
