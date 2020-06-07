#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	long n;
	cin>>n;
	long dem=0;
	for (long i=1; i<=n; i++)
	{
		for (long j=i; j<=n; j++)
		{
			long s=sqrt (i*i + j*j);
			if (s*s-j*j==i*i && s<=n)
			{
				dem++;
			}
		}
	}
	cout<<dem;
	return 0;
}
