#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    if(n-a>b) cout << b+1 << endl;
    else cout << n-a << endl;
}
