#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int chan=0, le=0,a;
    while(n>0)
    {
        a=n%10;
        if(a%2==0) chan++;
        else le++;
        n/=10;
    }
    cout << le << " " << chan << endl;
}
