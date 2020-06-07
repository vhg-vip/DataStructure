#include <stdio.h>
#include<math.h>

using namespace std;

#define pi atan(1)*4
int main()
{
    double n;
    scanf("%lf", &n);
    double a,b;
    a=n*n*pi;
    b=n*n*2;
    printf("%.6lf\n", a);
    printf("%.6lf\n",b);
}
