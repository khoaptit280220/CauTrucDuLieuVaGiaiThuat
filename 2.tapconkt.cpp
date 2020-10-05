#include<bits/stdc++.h>
using namespace std;
void tapconkt(int n, int k, int a[]){
	int f=0;
	bool kt=false;
	for(int i=k; i>0; i--){
		if(a[i] != (n-k+i)){
			f=i;
			kt=true;
			break;
		}
	}
	if(kt==false){
		for(int i=1; i<=k; i++){
			a[i]=i;
		}
	}
	else{
		a[f]= a[f]+1;
		for(int i=f+1; i<=k; i++){
			a[i]=a[i-1]+1;
		}
	}
	for(int i=1; i<=k; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k];
		for(int i=1; i<=k; i++){
			cin>>a[i];
		}
		tapconkt(n,k,a);
		cout<<endl;
	}
 	return 0;
}

