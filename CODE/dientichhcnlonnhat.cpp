#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a[4];
    for(int i=0; i<4; i++) cin >> a[i];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(a[j]>a[i]) swap(a[i],a[j]);
        }
    }
    int s;
    s=a[0]*a[2];
    cout << s << endl;
}
