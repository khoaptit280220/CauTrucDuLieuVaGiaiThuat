#include<bits/stdc++.h>
using namespace std;
void tapsu(int n, int k, int a[]){
	int b[k];
	for(int i=1; i<=k; i++){
		b[i] = a[i];
	}
	int d=0;
	for(int i= k; i>0; i--){
		if(a[i] != (n-k+i)){
			d=i;
			break;
		}
	}
	a[d] += 1;
	for(int i= d+1; i<=k; i++){
		a[i] = a[i-1] + 1;
	}
	int dem=0;
	for(int i=1; i<=k; i++){
		for(int j=1; j<=k; j++){
			if(b[i] == a[j]){
				dem ++;
			}
		}
	}
	if(dem==k){
		cout<<k<<endl;
	}
	else{
		cout<<k-dem<<endl;
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
		tapsu(n,k,a);
	}
 	return 0;
}
