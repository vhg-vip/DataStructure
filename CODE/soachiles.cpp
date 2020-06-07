#include<stdio.h>
#include<math.h>

int snt(int n)
{
    if(n<2) return 0;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) return 0;
        return 1;
    }
}

int achilles(int n)
{
    int dem=0,kt=0;
    if(n<2) return 0;
    else
    {
        for(int i=2; i<=n; i++)
        {
            if(snt(i)==1)
            {
                if(n%i==0)
                {
                    dem++;
                    if(n%(i*i)==0) kt++;
                    else kt--;
                }
            }
        }
        //printf("%d %d",dem,kt);
        if(kt==dem) return 1;
        else return 0;
    }
}

void solve(int a, int b)
{
    for(int i=a; i<=b; i++)
    {
        if(achilles(i)==1) printf("%d ",i);
    }
}

int main()
{
    int a,b;
    scanf("%d%d", &a, &b);
    if(a<=b) solve(a,b);
    else solve(b,a);
}
