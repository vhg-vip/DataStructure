#include<stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        int m=i,k=i;
        int dem=0;
        while(k>0)
        {
            k/=10;
            dem++;
        }
        int s=0,a=0,b;
        while(m>0)
        {
            a=m%10;
            b=1;
            for(int j=0; j< dem; j++) b*=a;
            s+=b;
            m/=10;
        }
        if(s==i) printf("%d ",i);
    }

}
