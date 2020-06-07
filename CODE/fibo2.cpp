#include <iostream>

using namespace std;

int main ()
{
	long long n;
	long long f1, f2;
	cin >> f1 >> f2;
	cin >> n;
	if (n%6==0) n=6;
	else n=n%6;
	long long fn;
	for (long long i=3; i<=n; i++)
	{
		fn=(f2-f1)%1000000007;
		f1=f2;
		f2=fn;
	}
	long long res;
	if (n==1) res=f1%1000000007;
	else if (n==2) res=f2%1000000007;
	else res=fn;
	if (res<0) cout << res+1000000007;
	else cout << res;
	return 0;
}
