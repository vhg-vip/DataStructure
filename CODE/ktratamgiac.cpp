#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a<=0 || b<=0 || c<=0) cout << 0 << endl;
    else
    {
        if(a+b+c==180) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
