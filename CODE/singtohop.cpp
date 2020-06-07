#include<iostream>
#include<algorithm>

using namespace std;

int a[20];
int n,k;

void init()
{
    for(int i=1; i<=k; i++) a[i]=i;
}

void display()
{
    for(int i=1; i<=k; i++) cout << a[i] << " ";
    cout << endl;
}

void next()
{
    int vt=k;
    while(vt>=0 && a[vt]== n-k+vt)  vt--;
    a[vt]++;
    for(int i=vt+1; i<=k; i++) a[i]= a[i-1]+1;
    display();
}

bool check()
{
    for(int i=1; i<=k; i++)
    {
        if(a[i] != n-k+i) return false;
    }
    return true;
}

int main()
{
    cin >> n >> k;
    init();
    display();
    while(check() == false) next();
    return 0;
}

