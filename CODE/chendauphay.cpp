#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n=s.length();
    int dem=0;
    for(int i=s.length()-1; i>=0; i--)
    {
        if(dem<3) dem++;
        else if (dem==3){
            s.insert(s.begin()+(i+1),44);
            dem=1;
        }
    }
    cout << s << endl;
}
