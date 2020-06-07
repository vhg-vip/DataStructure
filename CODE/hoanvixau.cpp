#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int dem=1,tong=1,k=1;
    sort(s.begin(), s.end());
    string a;
    a+=s;
    a+='\n';
    while(1)
    {
        if(next_permutation(s.begin(), s.end())==false) break;
        else
        {
            a+=s;
            a+='\n';
            k++;
        }
    }
    cout << k << endl;
    cout << a << endl;
}
