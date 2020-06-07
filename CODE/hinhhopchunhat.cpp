#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    double x,y,z,a,b,c,tong;
    cin >> x >> y >> z;
    a = sqrt((x*y)/z);
    b = x/a;
    c = y/a;
    tong = a*4 + b*4 + c*4;
    cout << tong << endl;
    return 0;
}
