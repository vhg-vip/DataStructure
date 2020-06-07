
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
	string S;
	cin>>S;
	int *dd;
	dd = (int *) calloc (123, sizeof (int));	//make dd[122]={0, 0,..,0};
	for (int i=0; i<S.length(); i++)
	{
		int so=S[i]-0;
		(*(dd+so))++;	//dd[so]++
	}
	int dem=0;
	for (int i=97; i<=122; i++)
	{
		if (*(dd+i)!=0) dem++;
	}
	if (dem%2!=0) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
	return 0;
}
