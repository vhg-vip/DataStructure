#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        string a;
        cin >> n;
        cin >> a;
        cout << n << " ";
        if(next_permutation(a.begin(), a.end())==false) cout << "BIGGEST" << endl;
        else{

            cout << a << endl;
        }
    }
}
