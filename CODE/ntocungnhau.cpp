#include<stdio.h>

void snt(int a, int b)
{
    int minn=a, res;
    if(b<a) minn=b;
    for(int i=minn; i>=1; i--)
    {
        if(a%i==0 && b%i==0){
            res=i;
            break;
        }
    }
    if(res==1) printf("YES");
    else printf("NO");
}

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    snt(a,b);
}
