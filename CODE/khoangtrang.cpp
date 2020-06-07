#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[10000];
    gets(s);
    char *p;
    char **a = (char**) malloc(100*sizeof(char));
    int k=0;
    p= strtok(s, " ");
    while(p!=NULL)
    {
        a[k]=p;
        k++;
        p= strtok(NULL, " ");
    }
    for(int i=0; i<k; i++)
    {
        printf("%s",a[i]);
        if(i<k-1)
        printf("\n");
    }
}
