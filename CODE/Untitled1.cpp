#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[i]=0;
    }
    int dem=0;
    int kt=0, k=0;
    for(int i=0; i<n; i++)
    {
        if(b[i]==0)
        {
            dem=1;
            b[i]=1;
            for(int j=i+1; j<n; j++)
            {
                if(a[j]==a[i]){
                    b[j]=1;
                    dem++;
                    kt=1;
                }
            }
            if(dem>1){
                c[k]=a[i];
                k++;
            }
        }
    }
    if(kt==0) printf("0");
    else {
        for(int i=0; i<k; i++) printf("%d ", c[i]);
    }
}
