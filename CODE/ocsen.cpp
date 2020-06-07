#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,v;
    cin >> a >> b >> v;
    long long ngay;
    long long c=a-b, d=v-b;
    if(d%c==0) ngay = d/c;
    else ngay = d/c + 1;
    cout << ngay << endl;
}
