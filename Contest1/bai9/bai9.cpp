#include<iostream> 
#include<algorithm>
#include<math.h>

using namespace std;

void Binary(int a, int n){
    int b[100];
    for(int i=n-1; i>=0; i--){
        b[i] = a%2;
        a/=2;
    }
    for(int i=0; i<n; i++) cout << b[i];
    cout << " ";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[5000];
        A[0]=0;
        A[1]=1;
        int p=1;
        int m=2;
        for(int i=2; i<=n; i++){
            p*=2;
            int u= 2*m-1;
            for(int j=m; j<=u; j++) A[j] = A[u-j] + p;
            m*=2;
        }
        for(int i=0; i<pow(2,n); i++){
            Binary(A[i], n);
        }
        cout << endl;
    }
}