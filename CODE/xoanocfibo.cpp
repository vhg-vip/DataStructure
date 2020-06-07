#include<stdio.h>
#include<math.h>

int f[100000];

long long fibo()
{
    f[1]=0;
    f[2]=1;
    f[3]=1;
    for(int i=4; i<100; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=0; i<100; i++) printf("%d ",f[i]);

}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int dem=1;
    int c=n,d=0;
    f[1]=0;
    f[2]=1;
    f[3]=1;
    for(int i=4; i<100; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    //for(int i=0; i<100; i++) printf("%d ",f[i]);
    while(dem<=n*n)
    {
        for(int j=d; j<c; j++)
        {
            a[d][j]=f[dem];
            dem++;
        }
        for(int i=d+1; i<c; i++)
        {
            a[i][c-1]=f[dem];
            dem++;
        }
        for(int j=c-2; j>=d; j--)
        {
            a[c-1][j]=f[dem];
            dem++;
        }
        for(int i=c-2; i>=d+1; i--)
        {
            a[i][d]=f[dem];
            dem++;
        }
        d++;
        c--;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
}
