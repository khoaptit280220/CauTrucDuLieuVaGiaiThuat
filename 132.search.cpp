#include<bits/stdc++.h>
using namespace std;
void tim(long n, long a[]){
	for(long i=0; i<n-1; i++){
		if(a[i]+1 != a[i+1]){
			cout<<a[i]+1<<endl;
			break;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n-1];
		for(long i=0; i<n-1; i++) cin>>a[i];
		tim(n,a);
	}
 	return 0;
}

