#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(int a, int b){
    if(a>b) return true;
    else return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; 
        cin >> n >> k;
        int a[10000];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n, cmp);
        for(int i=0; i<k; i++) cout << a[i] << " ";
        cout << endl;
    }
}