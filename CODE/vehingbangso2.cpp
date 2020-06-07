#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k=0,t=0;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<i; j++)
            cout << n-j << " ";
        for(int j=i; j<n; j++){
               cout << n-i << " ";
        }
        cout << endl;
    }
}
