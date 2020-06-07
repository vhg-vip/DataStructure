#include<iostream>

using namespace std;

int gia[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void solve(int n){
    int dem=0;
    for(int i=9; i>=0; i--){
        if(n>=gia[i]){
            while(n-gia[i]>=0 && n>0){
                dem++;
                n -= gia[i];
            }
        }
    }
    cout << dem << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
}