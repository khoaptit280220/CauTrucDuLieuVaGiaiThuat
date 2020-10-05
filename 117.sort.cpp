#include<bits/stdc++.h>
using namespace std;
int b[10000001];
void sx(int n, int a[] ){
	int d,c;
	for(int i=0; i<n; i++){
		b[i]=a[i];
	}
	sort(b, b+n);
	for(int i=0; i<n; i++){
		if(a[i] != b[i]){
			d=i;
			break;
		}
	}
	for(int i=n-1; i>0; i--){
		if(a[i]!=b[i]){
			c=i;
			break;
		}
	}
	cout<< d+1 <<" "<<c+1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		sx(n,a);
		cout<<endl;
	}
 	return 0;
}
