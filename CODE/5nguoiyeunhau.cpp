#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int tong;
    tong= a+b+c+d+e;
    if(tong%5==0 && tong!=0) cout << tong/5 << endl;
    else cout << -1 << endl;
}
