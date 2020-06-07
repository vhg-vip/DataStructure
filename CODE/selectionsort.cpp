#include<stdio.h>

void swapp(int *a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

void output(int a[], int n)
{
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
}

int check(int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1]) return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    int k;
    for(int i=0; i<n-1; i++)
    {
        k=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[k]) k=j;
        }
        swapp(&a[k],&a[i]);
        output(a,n);
    }
}
