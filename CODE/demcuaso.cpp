#include<bits/stdc++.h>

using namespace std;

int main()
{
    int M,N;
    cin >> M >> N;

    int n,m;
    m= M*4+M+1;
    n= N*4+N+1;
    char a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
}
