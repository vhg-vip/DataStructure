#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int a[100000];
    int tong=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int t=j+1; t<n; t++){
                if(a[i]+a[j]+a[t]<=m && a[i]+a[j]+a[t]>tong)
                    tong=a[i]+a[j]+a[t];
            }
        }
    }
    cout << tong << endl;
}
