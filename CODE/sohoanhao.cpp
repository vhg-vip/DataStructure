#include<stdio.h>
#include<math.h>

int snt(int n)
{
    if(n<2) return 0;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0) return 0;
        }
        return 1;
    }
}

int fibo(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    int f[100];
    f[0]=1;
    f[1]=1;
    if(s==1) return 1;
    for(int i=2; i<100; i++)
    {
        f[i]=f[i-1]+f[i-2];
        if(s==f[i]){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        for(int i=b; i<=a; i++)
        {
            if(snt(i)==1)
            {
                if(fibo(i)==1) printf("%d ",i);
            }
        }
    }
    else
    {
        for(int i=a; i<=b; i++)
        {
            if(snt(i)==1)
            {
                if(fibo(i)==1) printf("%d ",i);
            }
        }
    }

}
