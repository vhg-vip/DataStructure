#include<iostream>
#include<algorithm>
#include<vector>

using namespace std; 

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a;
        vector <int> b;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        int dau,cuoi;
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                dau = i+1;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] != b[i]){
                cuoi = i+1;
                break;
            }
        }
        cout << dau << " " << cuoi << endl;
    }
}