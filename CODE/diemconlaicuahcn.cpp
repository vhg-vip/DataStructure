#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if((x2-x1)*(x2-x3) + (y2-y1)*(y2-y3) ==0){
        x4=x3-x2+x1;
        y4=y3-y2+y1;
    }
    else if((x1-x2)*(x1-x3) + (y1-y2)*(y1-y3) ==0){
        x4=x3-x1+x2;
        y4=y3-y1+y2;
    }
    else{
        x4=x2-x3+x1;
        y4=y2-y3+y1;
    }
    cout << x4 << " " << y4;


}
