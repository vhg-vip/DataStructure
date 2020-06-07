#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    int minn=x;
    if(y<minn) minn=y;
    if(z<minn) minn=z;
    cout << minn << endl;
    int tong=0;
    if(minn==y) tong= y*3;
    else if(minn==z) tong= (z-1)*3;
    else
    {
        if(z-x>1) tong= (x+1)*3;
        else tong= (z-1)*3;
    }
    cout << tong << endl;
    return 0;
}
