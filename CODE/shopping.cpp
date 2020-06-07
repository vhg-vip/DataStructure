#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long d1,d2,d3,minn;
    cin >> d1 >> d2 >> d3;
    long a[4];
    a[0]= 2*(d1+d2);
    a[1]= d1+d3+d2;
    a[2]= 2*(d1+d3);
    a[3]= 2*(d2+d3);
    minn=1000000000;
    for(int i=0; i<4; i++){
        if(a[i]<minn) minn =a[i];
    }
    cout << minn << endl;
    return 0;
}
