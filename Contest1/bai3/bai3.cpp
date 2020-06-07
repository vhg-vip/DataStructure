#include<iostream>
#include<algorithm>

using namespace std;

void solve(int n){
    int a[1005];
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    int j = n-1;
    while(j>0 && a[j]>a[j+1]) j--;
    if(j>0){
        int k=n;
        while(a[j] > a[k]) k--;
        swap(a[j], a[k]);
        int r = j+1, s = n;
        while (r<s)
        {
            swap(r,s);
            r++;
            s--;
        }
        for(int i=1; i<=n; i++) cout << a[i] << " ";
    }
    else{
        for(int i=1; i<=n; i++){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t ;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    
}