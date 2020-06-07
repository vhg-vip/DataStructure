#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string a;
    while(s.length()%3 != 0)
    {
        s='0'+s;
    }
    for(int i=0; i<s.length(); i+=3)
    {
        for(int j=i; j<i+3; j++)
        {
            a+=s[j];
        }
        if(a=="000") cout << '0';
        if(a=="001") cout << '1';
        if(a=="010") cout << '2';
        if(a=="011") cout << '3';
        if(a=="100") cout << '4';
        if(a=="101") cout << '5';
        if(a=="110") cout << '6';
        if(a=="111") cout << '7';
        a.clear();
    }
    return 0;
}
