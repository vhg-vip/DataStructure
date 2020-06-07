#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s,dem=0;
    while(n>0)
    {
        s=n%10;
        dem++;
        n/=10;
    }
    cout << dem << endl;
    return 0;
}
