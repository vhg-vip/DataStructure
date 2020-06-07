#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void chuanhoa(char s[10000])
{
    for(int i=0; i<1000; i++)
    {
        if(s[i]>='A' && s[i]<='Z') s[i]= s[i] - 'A' + 'a';
    }
}

int main()
{
    char s[10000];
    gets(s);
    char *p;
    char **a = (char**)malloc(100*sizeof(char));;
    int k=0;
    p= strtok(s," ");
    while(p!=NULL)
    {
        a[k] = p;
        k++;
        p= strtok(NULL, " ");
    }
    for(int i=0; i<k; i++) chuanhoa(a[i]);
    for(int i=0; i<k-1; i++) printf("%c", a[i][0]);
    printf("%s", a[k-1]);

    printf("@ptit.edu.vn");
}
