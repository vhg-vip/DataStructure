#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100000];
    gets(a);
    char **b= (char**)malloc(100*sizeof(char));
    char *p;
    int dem=0;
    int kt=0;
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]!=' '){
            kt=1;
            break;
        }
    }
    if(kt==0) return 0;
    else
    {
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]>='A' && a[i]<='Z') a[i]= a[i] - 'A' + 'a';
        }
        p= strtok(a," ");
        while(p!= NULL)
        {
            b[dem]=p;
            dem++;
            p= strtok(NULL," ");
        }
        int c[10000]={0};
        for(int i=0; i<dem; i++)
        {
            int k=1;
            for(int j=i+1; j<dem; j++)
            {
                if(strcmp(b[i],b[j])==0) k++;
            }
            c[i]=k;
        }

        for(int i=0; i<dem; i++)
        {
            for(int j=i+1; j<dem; j++){
                if(c[i]<c[j]){
                    int t=c[i];
                    c[i]=c[j];
                    c[j]=t;
                    char d[1000]="";
                    strcpy(d,b[i]);
                    strcpy(b[i],b[j]);
                    strcpy(b[j],d);
                }
            }
        }
        //for(int i=0; i<dem; i++) printf("%d ", c[i]);
        printf("%s %d",b[0],c[0]);
        return 0;
    }

}
