#include <bits/stdc++.h>

using namespace std;

#define LL long long
#define pb push_back
#define mp make_pair
#define pill pair<int, int>
#define fill_c(a, b) memset(a, b, sizeof a)
#define FOR(i,x,y)  for(int i = x ; i< y ; i++)
#define ull unsigned long long
#define LF double
#define str string
#define se second
#define fi first

const long double PI = 3.141592653589793116;
typedef vector <LL> vint;
typedef vector <str> vstr;
typedef priority_queue <int> heap;

queue <pair<int, int> > qu;
int f[1000001];
int dd[1000001] = {0};
vint adj[10001];
int check[10001][10001] = {0};
int n, m, s;

int BFS(int s){
	for (int i=1; i<=n; i++)	f[i] = 1e9;
	qu.push(mp(s, 0));
	f[s] = 0;
	while (!qu.empty()){
		pill u = qu.front();
		qu.pop();
		for (int i=0; i<adj[u.fi].size(); i++){
			int v = adj[u.fi][i];
			if (f[v] == f[u.fi] + 1) dd[v] = 1;
			if (f[v] > f[u.fi] + 1){
				if (dd[u.fi] == 1) dd[v] = 1;
				qu.push(mp(v, u.se+1));
				f[v] = f[u.fi] + 1;
			}
		}
	}
	int res = 0;
	for (int i=1; i<=n; i++) res += dd[i];
	cout << res;
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m >> s;
	for (int i=1; i<=m; i++){
		int a, b;
		cin >> a >> b;
		if (check[a][b]==0){
			adj[a].pb(b);
			check[a][b] = 1;
		}
	}
	BFS(s);
	return 0;
}
