#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[12];
    for(int i=1; i<=10; i++)
    {
        a[i]= n*i;
        cout << a[i] << " ";
    }
}
