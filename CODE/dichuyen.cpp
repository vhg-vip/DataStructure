#include<bits/stdc++.h>

using namespace std;

int n;
char a[101][101];
int b[101][101];
bool check[10005];
int truoc[10005];
int k=0,s;
vector <int> ke[10005];

void nhap()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            b[i][j]=k;
            k++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='.'){
                //cout << b[i][j] << ":";
                if(a[i][j+1]=='.' && j<n-1) ke[b[i][j]].push_back(b[i][j+1]);
                if(a[i][j-1]=='.' && j>0) ke[b[i][j]].push_back(b[i][j-1]);
                if(a[i+1][j]=='.' && i<n-1) ke[b[i][j]].push_back(b[i+1][j]);
                if(a[i-1][j]=='.' && i>0) ke[b[i][j]].push_back(b[i-1][j]);
            }
        }
    }
    for(int i=0; i<n*n; i++) check[i] = true;
    for(int i=0; i<n*n; i++)
    {
        cout << i << ":";
        for(int j=0; j<ke[i].size(); j++){
            cout << ke[i][j] << " ";
        }
        cout << endl;
    }
}

void bfs(int s)
{
    queue <int> q;
    q.push(s);
    check[s]=false;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i=0; i<ke[u].size(); i++)
        {
            int v= ke[u][i];
            if(check[v]){
                q.push(v);
                check[v]=false;
                truoc[v]=u;
            }
        }
    }
}


void truyvet()
{
    int u=t;
    int p[10005];
    int d=0;
    while(u!=s)
    {
        d++;
        p[d]=u;
        u = truoc[u];
    }
    d++;
    p[d]=u;
    for(int i=d; i>=1; i--){
        cout << p[i] << " ";
    }
}

int main()
{
    nhap();
}
