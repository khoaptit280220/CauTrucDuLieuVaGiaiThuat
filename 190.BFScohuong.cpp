#include<bits/stdc++.h> 
using namespace std;
bool chuaxet[1005] ;
vector<int> ke[1005];
int n,m,u;
void BFS(int u) {
	queue<int> q;
	q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int s=q.front();
		q.pop();
		cout<<s<<" ";
		for(int i=0; i<ke[s].size(); i++){
			int v= ke[s][i];
			if(chuaxet[v]){
				q.push(v);
				chuaxet[v]= false;
			}
		}
	}
}
int main () {
	int t,i,x,y;
	cin>>t;
	while(t--) {
		memset(chuaxet,true,sizeof(chuaxet)) ;
		for(i=0;i<1005;i++) ke[i].clear(); 
		cin>>n>>m>>u;
		for(i=1;i<=m;i++) {
			cin>>x>>y;
			ke[x].push_back(y);
		//	ke[y].push_back(x) ;
		}
		BFS(u) ;
		cout<<endl;
	}
	return 0;	
}
