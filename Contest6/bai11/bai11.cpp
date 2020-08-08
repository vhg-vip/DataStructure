#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector <int> a;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        int res = a[0]+a[1];
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(abs(a[i]+a[j]) < abs(res)){
                    res = a[i]+a[j];
                    
                }
            }
        }
        cout << res << endl;
    }
}
