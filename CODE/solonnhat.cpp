#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    int m=0;
    if(a>m) m=a;
    if(b>m) m=b;
    if(c>m) m=c;
    printf("%d", m);
}
