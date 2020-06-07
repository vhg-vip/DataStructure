#include <stdio.h>
#include <math.h>
int main()
{
	int n,m;
	scanf ("%d%d",&n,&m);
	for (int i=1;i<= n;i++)
	{
		for( int j=1 ; j <= (m+n-1);j++)
		if (i<=j && j<(m+i)) printf("*");
		else if (j>=(m+i)) printf (" ");

		else printf ("~");
		printf ("\n");
	}
	return 0;
}
