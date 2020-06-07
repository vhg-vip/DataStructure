#include<iostream>

using namespace std;

bool check = false;

void print(int n, int a[], int k){
    int dem=0;
    for(int i=1; i<=n; i++){
        if(a[i]==1) dem++;
    }
    if(dem==k){
        for(int i=1; i<=n; i++) cout << a[i];
        cout << endl;
    }
}

void next(int n, int a[], int k){
    int i=n;
    while (a[i]==1 && i>0) i--;
    if(i==0) check = true;
    else
    {
        a[i] = 1;
        for(int j=i+1; j<=n; j++){
            a[j] = 0;
        }
    }
    print(n,a,k);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[20];
        
        for(int i=1; i<=n; i++){
            a[i] = 0;
        }
        check = false;
        while (!check)
        {
            next(n,a, k);
        }
        
        
    }
    
}