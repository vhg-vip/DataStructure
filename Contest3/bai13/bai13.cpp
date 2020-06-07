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
        int d; cin >> d;
        string s;
        cin >> s;
        int max=0;
        int dem[500] = {0};
        map<char, int> m;
        int res=1;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
            if(m[s[i]]>max) max = m[s[i]];
        }
        long long n=s.size();
        if( (max-1) * (d-1) > n-max) cout << -1 << endl;
        else cout << 1 << endl;
    }
}