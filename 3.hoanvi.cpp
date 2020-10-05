#include<bits/stdc++.h>
using namespace std;
void tapconkt(int n, int a[]){
	int f=0;
	bool kt=false;
	for(int i=n; i>1; i--){
		if(a[i]>a[i-1] ){
			f=i-1;
			kt=true;
			break;
		}
	}
	if(kt==false){
		for(int i=1; i<=n; i++){
			a[i]=i;
		}
	}
	else{
		swap(a[f],a[f+1]);
		int i=f+2;
		int j=n;
		while(i<n && j>i ){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	for(int i=1; i<=n; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		tapconkt(n,a);
		cout<<endl;
	}
 	return 0;
}

