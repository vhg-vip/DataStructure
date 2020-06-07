#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int y,w,d;
    y= n/365;
    w= (n-365*y)/7;
    d= n-365*y-7*w;
    cout << y << " " << w << " " << d << endl;
}
