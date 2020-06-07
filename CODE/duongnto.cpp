#include<bits/stdc++.h>

using namespace std;

string a,b;
map <string,int> check,dem;

int snt(int n)
{
    if(n<2) return 0;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
            if(n%i==0) return 0;
        return 1;
    }
}

int doi(string s)
{
    int sum=0;
    for(int i=0; i<s.length(); i++)
    {
        sum= sum*10 + (s[i]-'0');
    }
    return sum;
}

void bfs()
{
    queue <string> q;
    q.push(a);
    check[a]=1;
    while(!q.empty())
    {
        string u= q.front();
        q.pop();
        for(int i=0; i<4; i++)
        {
            if(i==0)
            {
                for(int j=1; j<=9; j++)
                {
                    string v=u;
                    v[i] = j+ '0';
                    if(check[v]==0 && snt(doi(v))==1)
                    {
                        check[v]=1;
                        q.push(v);
                        dem[v]= dem[u]+1;
                    }
                }
            }
            else
            {
                for(int j=0; j<=9; j++)
                {
                    string v=u;
                    v[i]= j+ '0';
                    if(check[v]==0 && snt(doi(v))==1)
                    {
                        check[v]=1;
                        q.push(v);
                        dem[v]= dem[u]+1;
                    }
                }
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b;
        bfs();
        cout << dem[b] << endl;
        check.clear();
        dem.clear();
    }
    return 0;
}
