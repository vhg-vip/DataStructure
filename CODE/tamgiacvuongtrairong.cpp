#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<=i)
            {
                if(i==n-1 || j==0 || i==j) printf("*");
                else printf(".");
            }
        }
        printf("\n");
    }
}
