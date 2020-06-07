#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100000];
    int dem=1, k=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]>=a[i]) dem++;
        else dem=1;
        if(dem>k) k=dem;
    }
    cout << k <<endl;
}
