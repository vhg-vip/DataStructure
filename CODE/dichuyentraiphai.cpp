#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int trai=0, phai=0, t=0, p=0 ,maxx=0;
    for(int i=0; i<s.length();i++)
    {
        if(s[i]=='L'){
            trai++;
            t++;
            if(trai-p>maxx) maxx=trai-p;
        }
        else if(s[i]=='R'){
            phai++;
            p++;
            if(phai-t>maxx) maxx = phai-t;
        }
        else
        {
            trai++;
            if(trai-p>maxx) maxx= trai-p;
            phai++;
            if(phai-t>maxx) maxx= phai-t;
        }
    }
    cout << maxx << endl;
}
