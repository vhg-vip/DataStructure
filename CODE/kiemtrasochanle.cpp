#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n<0) printf("0");
    else
    {
        if(n%2==0) printf("0");
        else printf("1");
    }
}
