#include<bits/stdc++.h>
using namespace std;
void tim(long n, long k, long a[]){
	for(long i=0; i<n; i++){
		if(a[i]== k){
			cout<<i+1<<endl;
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,k;
		cin>>n>>k;
		long a[n];
		for(long i=0; i<n; i++) cin>>a[i];
		tim(n,k,a);
	}
 	return 0;
}

