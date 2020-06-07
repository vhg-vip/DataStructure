#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        double n,l,m;
        int nam;
        cin >> n >> l >> m;
        nam =(double) log(m/n)/log(1+(l/100)) + 1;

        cout << nam << endl;
        t--;
    }
}
