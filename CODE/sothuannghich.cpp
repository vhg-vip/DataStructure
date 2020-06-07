#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=n,s=0;
    while(n>0)
    {
        s=s*10+(n%10);
        n/=10;
    }
    if(s==m) cout << 1 << endl;
    else cout << 0 << endl;
}
