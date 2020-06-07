#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    long long c, k;
    cin >> c >> k;
    long long a,b=1;
    for(long long i=0; i<k; i++){
        b*=10;
    }
    a= c%b;
    if(a<b/2){
        c=c-a;
    }
    else c=c-a+b;
    cout << c << endl;

}
