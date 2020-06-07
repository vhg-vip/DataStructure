#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int p;
    cin >> p;
    for (int q=0; q<p; q++)
    {
        int n;
        cin >> n;
        string s,a;
        cin >> s;
        int s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0,s8=0;
        for(int i=0; i<s.length()-2; i++)
        {
            a="";
            a= a+ s[i] + s[i+1] + s[i+2];
            if(a=="TTT") s1++;
            else if(a=="TTH") s2++;
            else if(a=="THT") s3++;
            else if(a=="THH") s4++;
            else if(a=="HTT") s5++;
            else if(a=="HTH") s6++;
            else if(a=="HHT") s7++;
            else s8++;
        }
        cout << q+1 << " " << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << " " << s7 << " " << s8 << endl;
    }
}
