#include<bits/stdc++.h>

using namespace std;
queue <int> s;
int main()
{
    int n,dem=0,m;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0 ; i<n; i++) s.push(a[i]);
    while(!s.empty())
    {
        int k=s.front();
        s.pop();
        m=0;
        cout << k << ": ";
        int t=s.size();
        //cout << s.size() << endl;
        for(int i=0; i<t; i++)
        {
            if(i==0)
            {
                dem++;
                if(s.front()>k) break;
                else{
                    int d = s.front();
                    s.push(d);
                    s.pop();
                }
            }
            else
            {

                if(s.back()<=k && s.back()<=s.front() && s.back()>=m){
                    cout << s.back() << " " << s.front() << endl;
                    m=s.front();
                    dem++;
                    int d=s.front();
                    s.push(d);
                    s.pop();
                }
                else{
                    int d=s.front();
                    s.push(d);
                    s.pop();
                }
            }
        }
        cout << "; " << dem << endl << endl;
    }
    cout << dem << endl;
}
