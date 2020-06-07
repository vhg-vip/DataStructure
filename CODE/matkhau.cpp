#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[50];
    int check=0, check1=0,check2=0,check3=0;
    scanf("%s", &s);
    size_t a= strlen(s);
    if(a<8 || a>32) printf("ko hop le");
    else
    {
        for(int i=0; i<a; i++){
            if(isdigit(s[i])) check=1;
            else if(islower(s[i])) check1=1;
            else if(isupper(s[i])) check2=1;
            else if(s[i]=='*' || s[i]=='&' || s[i]=='%' || s[i]=='$' || s[i]=='#' || s[i]=='@' || s[i]=='!') check3=1;
        }
        if(check==0 || check1==0 || check2==0 || check3==0) printf("ko hop le");
        else printf("hop le");
    }


}

