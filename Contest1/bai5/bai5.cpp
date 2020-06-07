#include<iostream>

using namespace std;
bool check = false;
void print(int k, int a[]){
    for(int i=1; i<=k; i++){
        cout << a[i];
    }
    cout << " ";
}

void next(int n, int k, int a[]){
    int i=k;
    while (i>0 && a[i]==n-k+i) i--;
    if(i>0){
        a[i] = a[i]+1;
        for(int j=i+1; j<=k; j++){
            a[j] = a[i] + j - i;
        }
    }
    else check = true;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[20];
        for(int i=1; i<=k; i++) a[i] = i;
        check = false;
        while(!check){
            print(k,a);
            next(n,k,a);
        }
        cout << endl;
    }
    
}