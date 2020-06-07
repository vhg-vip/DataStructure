#include<bits/stdc++.h>

using namespace std;

int n,m,s;
vector <int> ke[10005];
map <int,int> trace, dem;
map <int,bool> stable;

void bfs()
{
    for(int i=0; i<=n; i++) trace[i]=-1;
    for(int i=0; i<=n; i++) stable[i]=false;
    queue <int> q;
    q.push(s);
    trace[s]=1;
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        for(int i=0; i<=ke[u].size(); i++)
        {
            if(trace[i]!=u)
            {
                if(trace[i]==-1)
                {
                    q.push(i);
                    trace[i]=u;
                    dem[i]=dem[u]+1;
                    stable[i]=stable[u];
                }
                else if(dem[u]+1==dem[i])
                {
                    stable[i]=true;
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> s;
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        ke[a].push_back(b);
        ke[b].push_back(a);
    }
    bfs();
    int d=0;
    for(int i=1; i<=n; i++)
    {
        if(stable[i]==true) d++;
    }
    cout << d << endl;
}
