#include<bits/stdc++.h>

using namespace std;
int n;
string s;
void quaylui(vector <char> a)
{
    if(a.size()==n)
    {
        s=a[0];
        for(int i=1; i<n; i++){
            if(a[i]=='0' && s.length()<n){
                 if(a[i-1]=='0' && s.length()<n) s+=a[i];
                 else if(a[i-1]=='1' && s.length()<n) s+='1';

            }
            else if(a[i]=='1' && s.length()<n) {
                if(a[i-1]=='0' && s.length()<n){
                    s+=a[i];
                }
                else if(a[i-1]=='1' && s.length()<n){
                    s+='0';
                }
            }
        }
        cout << s << endl;
    }
    else
    {
        a.push_back('0'); quaylui(a); a.pop_back();
        a.push_back('1'); quaylui(a); a.pop_back();
    }
}

int main()
{
    cin >> n;
    vector <char> a;
    quaylui(a);

}
