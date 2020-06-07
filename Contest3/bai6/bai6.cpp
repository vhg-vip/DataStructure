#include<iostream>
#include<algorithm>

using namespace std;

bool checksort(int n, int a[], int start){
    bool check = true;
    if(start==0){
        for(int i=start; i<n-2; i+=2){
            if(a[i]>a[i+2]){
                check = false;
            }
        }
    }
    if(start==1){
        for(int i=start; i<n-2; i+=2){
            if(a[i]<a[i+2]){
                check = false;
            }
        }
    }
    
    return check;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1005];
        for(int i=0; i<n; i++) cin >> a[i];
        if(checksort(n,a,1) && checksort(n,a,0)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}