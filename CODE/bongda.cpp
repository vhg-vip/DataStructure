#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s,a,b;
    int doi1=0, doi2=0;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(i==0){
            a=s;
            doi1++;
        }
        else
        {
            if(s==a) doi1++;
            else{
                b=s;
                doi2++;
            }
        }
    }
    if(doi1>doi2) cout << a << endl;
    else cout << b << endl;
}
