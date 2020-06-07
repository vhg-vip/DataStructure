#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);
    if(a==0) printf("%.2f", -c/b);
    else
    {
        int delta;
        delta=b*b-4*a*c;
        if(denta<0) printf("NO");
        else if(denta==0) printf("%.2f", -b/(2*a));
        else printf("%.2f %.2f",(-b+sqrt(delta))/(2*a), (-b-sqrt(delta))/(2*a));

    }
}
