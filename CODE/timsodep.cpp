#include<iostream>

using namespace std;

int main()
{
    long n;
    cin >> n;
    int s,kt=1;
    while(n>0)
    {
        s=n%10;
        if(s!=0 && s!=6 && s!=8){
            kt=0;
            break;
        }
        else n/=10;
    }
    if(kt==1) cout << 1 << endl;
    else cout << 0 << endl;
}
