#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n>0)
    {
        string s;
        getline(cin, s);
        if(s=="lon hon") cout << "1" << endl;
        else if(s=="dung") cout << "2" << endl;
        else if(s=="nho hon") cout << "3" << endl;
        n--;
    }

}
