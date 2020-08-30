#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

struct house
{
    long long value, pos;
};
bool cmp(house a, house b){
    if(a.value > b.value) return true;
    else return false;
}


int main(){
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector <house> h;
        bool check[100000];
        for(long long i=0; i<n; i++){
            house x;
            cin >> x.value; 
            x.pos = i;
            check[i]=false;
            h.push_back(x);
        }
        sort(h.begin(), h.end(), cmp);
        long long res = h[0].value;
        check[h[0].pos] = true;
        for(long long i=1; i<n; i++){
            if(check[h[i].pos+1] == false && check[h[i].pos-1] == false){
                res += h[i].value;
                check[h[i].pos] = true;
            }
        }
        cout << res << endl;
    }
}