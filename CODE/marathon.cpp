#include<iostream>
#include<algorithm>

using namespace std;

struct bo
{
    int h,p,s;
};

bool cmp(bo a, bo b)
{
    if(a.h<b.h || (a.h==b.h && a.p<b.p) || (a.h==b.h&&a.p==b.p&&a.s<b.s)) return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    bo a[10000];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].h >> a[i].p >> a[i].s;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++){
        cout << a[i].h << " " << a[i].p << " " << a[i].s <<endl;
    }
}
