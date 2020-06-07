#include<iostream>
#include<string>

using namespace std;

long long k, a[1000],d;
void init(){
    k=0;
}


void push(long x)
{
    k++;
    a[k]=x;
}

void top()
{
    if(k==0) cout << -1 << endl;
    else cout << a[k] << endl;
}

void pop()
{
    if(k>0) k--;
}

void sizee()
{
    cout << k << endl;
}

void emptyy()
{
    if(k==0) cout << 1 << endl;
    else cout << 0 << endl;
}

int main()
{
    string s;
    long x;
    while(1)
    {
        getline(cin, s);
        if(s=="init") init();
        else if(s=="push"){
            cin >> x;
            push(x);
        }
        else if(s=="top") top();
        else if(s=="pop") pop();
        else if(s=="size") sizee();
        else if(s=="empty") emptyy();
        else if(s=="end") break;
    }

}








