#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    long long a[n];
    for(long long i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    long long cao=10000000, thap=0, giua=(thap+cao)/2;
    long long h=0;
    while(thap<=cao)
    {
        giua= (thap+cao)/2;
        long long tong=0;
        for(long long i=0; i<n; i++){
            if(a[i]>giua){
                tong+=a[i]-giua;
            }
        }

        if(tong>=m){
            h=giua;
            thap=giua+1;
        }

        else cao=giua-1;
    }
    cout << h << endl;
}
