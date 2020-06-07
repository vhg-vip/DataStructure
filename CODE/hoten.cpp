#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void chuanhoa(char a[10000])
{
    if(a[0]>='a' && a[0]<='z') a[0]=a[0] - 'a' + 'A';
    for(int i=1; i<10000; i++)
    {
        if(a[i]>='A' && a[i]<='Z') a[i] = a[i] - 'A' + 'a';
    }
    printf("%s", a);
}

void ten(char a[10000])
{
    for(int i=0; i<10000; i++)
    {
        if(a[i]>='a' && a[i]<='z') a[i] = a[i] - 'a' + 'A';
    }
    printf("%s", a);
}

int main()
{
    char a[100000];
    char **b = (char **)malloc(100*sizeof(char));;
    gets(a);
    char *p;
    p= strtok(a," ");
    int k=0;
    while(p!=NULL)
    {
        b[k] = p;
        k++;
        p= strtok(NULL," ");
    }
    ten(b[k-1]);
    printf(", ");
    for(int i=0; i<k-1; i++)
    {
        chuanhoa(b[i]);
        printf(" ");
    }



}
