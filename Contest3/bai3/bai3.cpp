#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

typedef long long ll;
#define MAX 1000000007

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector <ll> a;
        for(int i=0; i<n; i++){
            int b;
            cin >> b;
            a.push_back(b);
        }
        sort(a.begin(), a.begin()+n); 

        ll sum=0;
        for(int i=0; i<n; i++){
            sum += (a[i]*i);
            sum = sum%MAX;
        }
        cout << sum << endl;
    }
    
}