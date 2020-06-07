#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100000],s2[100000];
    gets(s1);
    gets(s2);
    char **a = (char**) malloc(100*sizeof(char));
    char **b = (char**) malloc(100*sizeof(char));
    char *p1,*p2;
    int k1=0,k2=0;
    for(int i=0; i<strlen(s1); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z') s1[i]= s1[i] - 'A' + 'a';
    }
    for(int i=0; i<strlen(s2); i++)
    {
        if(s2[i]>='A' && s2[i]<='Z') s2[i]= s2[i] - 'A' + 'a';
    }
    p1= strtok(s1," ");
    while(p1!=NULL)
    {
        a[k1]=p1;
        k1++;
        p1= strtok(NULL, " ");
    }
    p2= strtok(s2, " ");
    while(p2!=NULL)
    {
        b[k2]=p2;
        k2++;
        p2= strtok(NULL, " ");
    }
    int c[10000]={0};
    for(int i=0; i<k1; i++)
    {
        for(int j=0; j<k2; j++)
        {
            if(strcmp(a[i],b[j])==0) c[i]=1;
        }
    }
    for(int i=0; i<k1; i++)
    {
        if(c[i]==0)
        {
            for(int j=i+1; j<k1; j++)
            {
                if(strcmp(a[i],a[j])==0) c[j]=1;
            }
        }
    }
    for(int i=0; i<k1; i++)
    {
        if(c[i]==0){
           printf("%s", a[i]);
           printf(" ");
        }
    }
}
