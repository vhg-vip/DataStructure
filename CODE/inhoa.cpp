#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    char s[10000];
    gets(s);
    char **b = (char**)malloc(100*sizeof(char));
    int k=0;
    char *p;
    p= strtok(s, " ");
    while(p!=NULL)
    {
        b[k]=p;
        k++;
        p= strtok(NULL, " ");
    }
    for(int i=0; i<k; i++)
    {
        int check=1;
        for(int j=0; j<strlen(b[i]); j++)
        {
            if(islower(b[i][j])){
                check=0;
                break;
            }
        }
        if(check==1) printf("%s ", b[i]);
    }
    return 0;
}
