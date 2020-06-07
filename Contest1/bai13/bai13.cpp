#include<iostream>

using namespace std;

bool check = false;

void print(int n, int a[], int k){
    int dem[20], res=0, d=0 ;
    int b[20];
    int m=1;
    for (int i=1; i<=n; i++){
        b[i]=0;
        dem[i]=0;
    }
    while(m<=n){
        if(a[m]==0){
            int c=0;
            for(int j=m; j<=n; j++){
                if(a[m]==a[j]){
                    dem[m]++;
                    c++;
                }
                else break;
            }  
            m += c; 
        }
        
        m++;
    }
    for(int i=1; i<=n; i++){
        if(dem[i]==k) res++;
    }
    if(res==1){
        for(int i=1; i<=n; i++){
            if(a[i]==0) cout << "A";
            else cout << "B";
        }
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