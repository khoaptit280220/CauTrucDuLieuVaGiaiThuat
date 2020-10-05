#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int n;
string s;
bool kt;
void Try(int i, int j, int k){
	if(a[i][j]==0) return;
	else{
		if(i==n && j ==n){
			for( int l = 0; l<k; l++) cout<<s[l];
			cout<<" ";
			kt = true;
			
		}
		if(i+1<=n && a[i+1][j]==1){
			s[k]= 'D';
		 	Try(i+1, j, k+1);
		}
		if(j+1<=n && a[i][j+1]==1){
			s[k] = 'R';
			Try(i, j+1, k+1);
		}
		
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
		kt = false;
		Try(1,1,0);
		
	}
}
