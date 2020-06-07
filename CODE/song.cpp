#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1;i<=n;i++)
	{
		int a=i,b=i,c=0;
		while(a>0)
		{
			a=a/10;
			c++;
		}
		int x,y=0 ;
		while(b>0)
		{
		    int d=1;
			x=b%10;
			for(int j=0; j<c; j++) d*=x;
			y+=d;
			b=b/10;
		}
		if (y==i) printf("%d ",i);
	}
	return 0;
}
