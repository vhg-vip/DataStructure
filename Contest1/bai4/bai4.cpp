#include<iostream>

using namespace std;

bool check = false;

void print(int n, int a[]){
    for(int i=1; i<=n; i++){
        if(a[i]==0) cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}

void next(int n, int a[]){
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
    print(n , a);
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[20];
        if(n==1) cout << 'A' << " " << 'B' << endl;
        else{
            for(int i=1; i<=n; i++){
                a[i] = 0;
            }
            print(n,a);
            check = false;
            while (!check)
            {
                next(n,a);
            }
            cout << endl;
        }
        
    }
    
}