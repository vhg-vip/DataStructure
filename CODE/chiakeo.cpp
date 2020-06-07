#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int maxx, minn;
    if(k%(n-1)==0){
        maxx=k/(n-1)+k;
        minn=k/(n-1)-1+k;
    }
    else{
        maxx=k/(n-1)+k;
        minn=k/(n-1)+k;
    }
    cout << minn << " " << maxx << endl;
}
