#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main(){
	int t,n,m,u,v;
	cin>>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin>>n>>m;
		for(int i=0; i<m; i++){
			cin>>u>>v;
			a[u][v]=1;
			a[v][u]=1;
		}
		for(int i=1; i<=n; i++){
			cout<<i<<": ";
			for(int j=1; j<=n; j++){
				if(a[i][j]) cout<<j<<" ";
			}
			cout<<endl;
		}
	}
 	return 0;
}
