#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    if(a<=0 || b<=0) printf("0");
    else
    {
        int c,s;
        s=a*b;
        c=2*(a+b);
        printf("%d %d", c,s);
    }
}
