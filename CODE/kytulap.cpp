#include<bits/stdc++.h>

using namespace std;

int n,res= INT_MAX;
vector <int> b(10,0);
vector <bool> check(11,false);
struct xau
{
    string s;
};

int ktraxau(string a, string b)
{
    int kt=0;
    for(int i=0; i<a.length(); i++)
    {
        for(int j=0; j<b.length(); j++)
        {
            if(a[i]==b[j]){
                kt++;
            }
        }
    }
    return kt;
}

xau a[20];

void dequy(int x)
{
    int tong;
    if(x==n)
    {
        tong=0;
        for(int i=0; i<n; i++)
        {
            tong = tong+ ktraxau(a[b[i]].s, a[b[i+1]].s);
        }
        if(tong<res) res=tong;
    }
    else
    {
        for(int j=1; j<=n; j++)
        {
            if(check[j]==false){
                check[j]=true;
                b[x]=j;
                dequy(x+1);
                check[j]=false;
            }
        }
    }
}

int main()
{

    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i].s;
    }
    dequy(0);
    cout << res << endl;
    return 0;
}
