#include<bits/stdc++.h>
using namespace std;
void sx(int n,int k, int a[], int b[]){
	int dem = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			if( pow(a[i], b[j]) > pow(b[j], a[i])){
				dem++;
			}
		}
	}
	cout<<dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n], b[k];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<k; i++){
			cin>>b[i];
		}
		sx(n,k,a,b);
		cout<<endl;
	}
 	return 0;
}

