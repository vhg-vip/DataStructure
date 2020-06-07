#include<bits/stdc++.h>

using namespace std;

int64_t w[100],v[100],b[100],gt=0,n,m,dem1=0,dem2=1;
int64_t w1[100],v1[100];

struct vang
{
    int64_t weight, value;
};

vang a[1000000];

int dequy1(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n/2-1)
        {
            int64_t nang=0,tong=0;
            for(int j=0; j<n/2; j++){
                tong=tong+v[j]*b[j];
                nang=nang+w[j]*b[j];
            }
            w1[dem1]=nang;
            v1[dem1]=tong;
            dem1++;
        }
        else dequy1(x+1);
    }
    return 0;
}

int dequy2(int x)
{
    for(int i=0; i<=1; i++)
    {
        b[x]=i;
        if(x==n-1)
        {
            int64_t nang=0,tong=0;
            for(int j=n/2; j<n; j++){
                tong=tong+v[j]*b[j];
                nang=nang+w[j]*b[j];
            }
            a[dem2].weight=nang;
            a[dem2].value=tong;
            dem2++;
        }
        else dequy2(x+1);
    }
    return 0;
}

bool cmp(vang a, vang b)
{
    if(a.weight<b.weight || (a.weight==b.weight && a.value>b.value)) return true;
    return false;
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++) cin >> w[i] >> v[i];
    dequy1(0);
    dequy2(n/2);
    sort(a,a+dem2,cmp);
    int64_t res=0,dau=1, cuoi=dem2, giua=(dau+cuoi)/2;
    for(int i=0; i<dem1; i++)
    {
        while(dau!=giua && cuoi!=giua)
        {
            giua=(dau+cuoi)/2;
            if(w1[i]+a[giua].weight<=m) dau=giua;
            else cuoi=giua;
        }
        if(v1[i]+a[giua].value>res) res= v1[i]+a[giua].value;
    }
    cout << res << endl;
}
