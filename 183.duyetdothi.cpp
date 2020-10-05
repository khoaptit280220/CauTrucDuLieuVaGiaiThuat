#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[50][50] = {0};
	for(int i=1; i<=n; i++){
		int m;
		while(cin>>m){
			a[i][m]=1;
			
		}
	}
	for(int i=1;i<=n;i++) {
		for(int j=i+1;j<=n;j++){
			if(a[i][j]) cout<<i<<" " <<j<<endl; 
		}
	}
 	return 0;
}

