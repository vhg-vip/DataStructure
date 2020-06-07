#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long k,s=1;
    cin >> k;
    while(s<k)
    {
        s*=2;
    }

    int socola, be;
    if(s==k) cout << s << " " << "0" << endl;
    else
    {
        while(socola!=k)
        {

            socola=0;
            be=0;
            int conlai=s;
            while(1)
            {
                socola+=conlai/2;
                be++;
                if(socola==k){
                    cout << s << " " << be << endl;
                    break;
                }
                else if(socola>k){
                    socola= socola - conlai/2;
                }
                conlai/=2;
            }
            s*=2;
        }
    }
}
