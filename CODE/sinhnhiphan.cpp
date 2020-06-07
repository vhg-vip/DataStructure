#include<iostream>
#include<algorithm>

using namespace std;

int a[20];
int stop=1,n;

void init()
{
    for(int i=1; i<=n; i++) a[i]=0;
}

void display()
{
    for(int i=1; i<=n; i++) cout << a[i];
    cout << endl;
}

void next()
{
    int vt=n;
    while(vt>=0 && a[vt]==1){
        a[vt]=0;
        vt--;
    }
    if(vt==0) stop=0;
    else{
        a[vt]=1;
        display();
    }

}

int main()
{
    cin >> n;
    init();
    display();
    while(stop==1) next();
    return 0;
}
