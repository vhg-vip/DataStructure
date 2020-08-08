#include<iostream>
#include<algorithm>

using namespace std;

bool check = false;

void print(int n, int a[]){
    for(int i=1; i<=n; i++) cout << a[i];
    cout << " ";
}

void next(int n, int a[]){
    int i=n-1;
    while(i>0 &&  a[i]>a[i+1]) i--;
    if(i>0){
        int k=n; 
        while(a[i]>a[k]) k--;
        swap(a[i],a[k]);
        sort(a+i+1, a+n+1);
    }
    else check = true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[20];
        for(int i=1; i<=n; i++) a[i]=i;
        check = false;
        while(check==false){
            print(n,a);
            next(n,a);
        }
    }
}