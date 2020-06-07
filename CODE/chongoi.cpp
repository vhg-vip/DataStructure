#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem=1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='S') dem++;
        else{
            dem++;
            i++;
        }
    }
    if(dem<n) cout << dem << endl;
    else cout << n << endl;
}
