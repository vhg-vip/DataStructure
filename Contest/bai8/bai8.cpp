#include <iostream>

using namespace std;

unsigned long long f[100] = {0};
void fibo(){
    f[1] = 1;
    f[2] = 1;
    for(int i=2; i<100; i++){
        f[i] = f[i-1] + f[i-2];
    }
    // for(int i=1; i<100; i++) cout << f[i] << " ";
    
}

void solve(int n){
    int count = 1;
    int end = n, start = 1;
    unsigned long long a[11][11] = {0};
    while (count <= n*n)
    {
        for(int col=start; col<=end; col++){
            if(count > n*n) break;
            a[start][col] = f[count];
            // cout << count << " ";
            count++;
        }
        for(int row=start+1; row<=end; row++){
            if(count > n*n) break;
            a[row][end] = f[count];
            // cout << count << " ";
            count++;
        }
        for(int col=end-1; col>=start; col--){
            if(count > n*n) break;
            a[end][col] = f[count];
            // cout << count << " ";
            count++;
        }
        for(int row=end-1; row>start; row--){
            if(count > n*n) break;
            a[row][start] = f[count];
            // cout << count << " ";
            count++;
        }
        start++;
        end--;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    fibo();
    int t;
    cin >> t;
    for(int d=1; d<=t; d++){
        int n;
        cin >> n;
        cout << "Test " << d << ":" << endl;
        solve(n);
    }
}