#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;

bool chuaxet[1005];
int dem=0;

void bfs(int u,vector<int> a[]){
	chuaxet[u]=false;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int s=q.front();
		q.pop();
		dem++;
		for(int i=0;i<a[s].size();i++){
			int k=a[s][i];
			if(chuaxet[k]){
				q.push(k);
				chuaxet[k]=false;
			}
		}
	}
}

void DuyetTPLT(int V, vector <int> a[]){
	priority_queue <int> res;
    for(int i=1; i<=V; i++){
        if(chuaxet[i] == true){
            bfs(i,a);
        }
		res.push(dem);
		dem=0;
    }
	
}

main(){
	int t; cin>>t;
	while(t--){
		dem = 0;
		int N,M; cin>>N>>M;
		vector<int> a[1005];
		for(int i=1;i<=M;i++){
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=N;i++){
			chuaxet[i]=true;
		}
		DuyetTPLT(N,a);
		priority_queue <int> k;
		k.push(1);
		k.push(2);
		cout << k.top() << endl;
	}	
}
