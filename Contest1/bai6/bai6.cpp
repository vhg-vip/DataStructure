#include<iostream>
#include<algorithm>

using namespace std;

bool check = false;
void print(int n, int a[]){
    for(int i=1; i<=n; i++){
        cout << a[i];
    }
    cout << " ";
}

void next(int n, int a[]){
    int j = n-1;
    while(j>0 && a[j]>a[j+1]) j--;
    if(j>0){
        int k=n;
        while(a[j]>a[k]) k--;
        swap(a[j],a[k]);
        int r=j+1, l=n;
        while(r<l){
            swap(a[r],a[l]);
            r++;
            l--;
        }
    }
    else check = true;
}

int main(){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[20];
        check = false;
        for(int i=1; i<=n; i++){
            a[i] = i;
        }
        while(!check){
            print(n,a);
            next(n,a);
        }
        cout << endl;
    }
}