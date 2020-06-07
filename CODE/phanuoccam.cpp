#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    double s=0;
    for(int i=0; i<n; i++) s+=a[i];
    double cam;
    cam= s/(100*n)*100;
    cout << setprecision(14) << cam << endl;
}
