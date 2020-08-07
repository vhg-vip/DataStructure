#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

struct number{
    int a,b,index;
};

bool cmp(number x, number y){
    if(x.b < y.b) return true;
    else if(x.b > y.b) return false;
    else if(x.index < y.index) return true;
    else return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        number k[100003];
        for(int i=0; i<n; i++){
            cin >> k[i].a;
            k[i].b = abs(k[i].a-x);
            k[i].index = i;
        }
        sort(k, k+n, cmp);
        for(int i=0; i<n; i++){
            cout << k[i].a << " ";
        } 
        cout << endl;
    }
}