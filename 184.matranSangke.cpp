#include<bits/stdc++.h>
using namespace std;
int a[1001][1001];
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]==1) cout<<j+1<<" ";
		}
		cout<<endl;
	}
 	return 0;
}
