#include <iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int n,x;
bool cmp(int a, int b){
    if(abs(a-x)<abs(b-x)) return true;
    else return false;
}

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        // int n,k;
        cin>>n>>x;
        int a[100005];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n, cmp);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
        cout<<endl;
    }


    //code
    return 0;
}