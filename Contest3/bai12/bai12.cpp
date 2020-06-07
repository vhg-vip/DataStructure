#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dem[500] = {0};
        map<char, int> m;
        int res=1;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        map<char, int >::iterator temp;
        if(s.length() % 2 == 0){
            for(char i='a'; i<='z'; i++){
                // cout << i << " " <<  m[i] << endl;
                if(m[i]>s.length()/2){
                    res=-1;
                    break;
                }
            }
        }
        else{
            for(char i='a'; i<='z'; i++){
                // cout << i << " " <<  m[i] << endl;
                if(m[i]>s.length()/2+1){
                    res=-1;
                    break;
                }
            }
        }
        cout << res << endl;
    }
}