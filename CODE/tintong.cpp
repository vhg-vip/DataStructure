#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int tong=0;
    if(a>b)
    {
        for(int i=b; i<=a; i++)
        {
            tong+=i;
        }
    }
    else
    {
        for(int i=a; i<=b; i++)
            tong+=i;
    }
    cout << tong << endl;
}
