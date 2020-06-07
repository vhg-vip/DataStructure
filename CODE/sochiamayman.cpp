#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,k=0;
    cin >> n;
    int a[14]={4,7,44,47,74,77,444,447,474,477,777,744,774,747};
    for(int i=0; i<14; i++)
    {
        if(n%a[i]==0) k=1;
    }

    if(k==1) cout << "YES" << endl;
    else cout <<  "NO" << endl;

}
