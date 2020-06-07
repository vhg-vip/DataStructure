#include<bits/stdc++.h>

using namespace std;

struct diem
{
    int s,d;
};

bool cmp(diem a, diem b)
{
    if(a.s<b.s) return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector <diem> a(2*n);

    for(int i=0; i<n; i++){
        cin >> a[i].s;
        a[i].d=0;
    }
    for(int i=n; i<2*n; i++){
        cin >> a[i].s;
        a[i].d=1;
    }
    sort(a.begin(), a.end(), cmp);
    int dem=0;
    int i=1;
    while(i<2*n)
    {
        if(a[i].d != a[i-1].d){
            dem++;
            i+=2;
        }
        else i++;
    }
    cout << dem << endl;
}
