#include<bits/stdc++.h>

using namespace std;

void sapxep(int a[], int n, int m)
{
    for(int i=m; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(a[i]>a[j]) swap(a[i],a[j]);
        }
    }
}

void khoitao(int a[], int n)
{
    for(int i=1; i<=n; i++)
        a[i]=i;
}

void in(int a[], int n)
{
    for(int i=1; i<=n; i++) cout << a[i];
    cout << endl;
}

int main()
{
    int b[1000];
    int n;
    cin >> n;
    int a[n+1];
    //for(int i=1; i<=n; i++) cin >> a[i];
    khoitao(b,n);
    in(b,n);
    while(1)
    {
        int i;
        for(int i=n; i>0; i--)
        {
            if(i==1) return 0;
            if(b[i-1]<b[i])
                break;
        }
        for(int j=n; j>=i; j--)
        {
            if(b[j]>b[i-1]){
                swap(b[j], b[i-1]);
                sapxep(b,n,i);
                in(b,n);
                break;
            }
        }
    }
}
