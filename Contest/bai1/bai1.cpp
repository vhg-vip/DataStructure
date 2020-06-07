#include <iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){
    ll tmp;
    while(b!=0){
        tmp = a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b;
        cin >> a >> b;
        ll ucln = gcd(a,b);
        ll bcnn = (a*b)/ucln;
        cout << ucln << " " << bcnn << endl;
    }
    
}