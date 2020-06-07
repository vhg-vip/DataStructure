#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int dem=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << dem << " ";
            dem++;
        }
        cout << endl;
    }
}
