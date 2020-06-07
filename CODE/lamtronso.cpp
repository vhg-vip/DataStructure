#include <iostream>

using namespace std;

long test, n;

void lamtron()
{
    cin>> n;
    long tmp=0, dem=1;
    while (n/10!=0)
    {
        tmp=(n%10+tmp>=5);
        n = n / 10; dem=dem*10;
    }
    cout << (n+tmp)*dem << endl;
}

int main()
{
    cin >> test;
    for (long i=1; i<=test; i++)
    {
        int n;
        cin >> n;
        long k=0, dem=1;
        while(n/10!=0)
        {
            k=(n%10+k>=5);
            n = n / 10;
            dem=dem*10;
        }
        cout << (n+k)*dem << endl;
    }
    return 0;
}
