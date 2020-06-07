#include <iostream>

using namespace std;

void solve(int n){
    int count = n*n;
    int end = n, start = 1;
    int a[21][21] = {0};
    while (count > 0)
    {
        for(int col=start; col<=end; col++){
            if(count < 0) break;
            a[start][col] = count;
            // cout << count << " ";
            count--;
        }
        for(int row=start+1; row<=end; row++){
            if(count < 0) break;
            a[row][end] = count;
            // cout << count << " ";
            count--;
        }
        for(int col=end-1; col>=start; col--){
            if(count < 0) break;
            a[end][col] = count;
            // cout << count << " ";
            count--;
        }
        for(int row=end-1; row>start; row--){
            if(count < 0) break;
            a[row][start] = count;
            // cout << count << " ";
            count--;
        }
        start++;
        end--;
    }
    if(n%2==1){
        a[n/2+1][n/2+1] = 1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int d=1; d<=t; d++){
        int n;
        cin >> n;
        cout << "Test " << d << ":" << endl;
        solve(n);
    }
}