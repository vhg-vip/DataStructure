#include<iostream>

using namespace std;

bool check = false;

void next(int n, int k, int a[]){
    int i=k;
    while (i>0 && a[i]==n-k+i) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1; j<n; j++){
            a[j] = a[i]+j-i;
        }
    }
    else check = true;
}

void print(int k, int a[]){
    for(int i=1; i<=k; i++){
        cout << a[i];
    }
    cout << " ";
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; 
        cin >> n >> k;
        int a[20];
        for(int i=1; i<=k; i++) a[i] = i;
        check = false;
        while(check==false){
            print(k,a);
            next(n,k,a);
        }
        cout << endl;
    }
}