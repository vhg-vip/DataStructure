#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int q=0; q<t; q++)
    {
        int n;
        cin >> n;
        if(n<10) cout << n << endl;
        else
        {
            int s=0;
            while(n>0){
                s+=(n%10);
                n/=10;
            }
            int k=0;
            while(s>=10){
                s= (s%10) + (s/10);
            }

            cout << s << endl;
        }
    }
}
