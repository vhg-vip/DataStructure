#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[100];
    scanf("%s",&s);
    char *a;
    a = &s;
    while(*a!=NULL)
    {
        long x;
        x = strtol(a, &a, 0);
        printf("%d",x);
        printf("\n%s", a);
    }

}
