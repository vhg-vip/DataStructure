#include<iostream>
#include<algorithm>

using namespace std;

struct num{
    int x,index;
};

bool cmp(num a, num b){
    if(a.x < b.x) return true;
    else return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        num a[1005];
        for(int i=0; i<n; i++){
            cin >> a[i].x;
            a[i].index = i;
        }
        sort(a, a+n, cmp);
        int dem=0;
        for(int i=0; i<n; i++){
            while(a[i].index != i){
                dem++;
                swap(a[i], a[a[i].index]);
            }
        }
        cout << dem << endl;
    }
}