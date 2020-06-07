#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[10000];
    gets(s);
    char **b = (char**)malloc(100*sizeof(char));
    int k=0;
    char *p;
    p = strtok(s, " ");
    while(p!=NULL)
    {
        b[k]=p;
        k++;
        p= strtok(NULL, " ");
    }
    int minn=10000, maxx=0;
    int vt1=0, vt2=0;
    //printf("%d ", strlen(b[k-1]));
    for(int i=0; i<k; i++)
    {
        int t=strlen(b[i]);
        if(t>maxx){
            maxx=t;
            vt1=i;
        }
        if(t<minn){
            minn=t;
            vt2=i;
        }
    }
    printf("%s %s",b[vt1],b[vt2]);
}
