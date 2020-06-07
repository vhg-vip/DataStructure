#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[10000];
    gets(s);
    char **a = (char**)malloc(100*sizeof(char));
    for(int i=0; i<strlen(s); i++){
        if(s[i]>='A' && s[i]<='Z') s[i]= s[i]- 'A' + 'a';
    }
    char *p;
    int k=0;
    p= strtok(s, " ");
    while(p!=NULL)
    {
        a[k]=p;
        k++;
        p= strtok(NULL, " ");
    }
    int dem[10000]={0};
    for(int i=0; i<k; i++)
    {
        if(dem[i]!=-1)
        {
            dem[i]++;
            for(int j=i+1; j<k; j++)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    dem[i]++;
                    dem[j]=-1;
                }
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        if(dem[i]!=-1)
        {
            printf("%s %d\n", a[i], dem[i]);
        }
    }
}
