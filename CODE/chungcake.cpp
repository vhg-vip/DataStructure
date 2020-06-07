#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout << "* ";
            else if(i==n/2 || j==n/2) cout << "* ";
            else if(i==j) cout << "* ";
            else if(i+1==n-j) cout << "* ";
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}
