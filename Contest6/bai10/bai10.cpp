#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        bool check[10]={false};
        for(int i=0; i<n; i++){
            int x; cin >> x;
            while(x>0){
                int k=x%10;
                if(check[k] == false) check[k] = true;
                x/=10;
            }
        }
        for(int i=0; i<10; i++){
            if(check[i] == true) cout << i << " ";
        }
        cout << endl;
    }
}