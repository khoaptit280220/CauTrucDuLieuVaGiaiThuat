#include<bits/stdc++.h>
using namespace std;
void chiaMang(int n, int k, int a[]){
	sort(a, a+n);
	long long sum1=0, sum2=0;
	if(k<n/2){
		for(int i=0; i<k; i++){
			sum1 += a[i];
		}
		for(int i=k; i<n; i++){
			sum2 += a[i];
		}
		cout<<(sum2-sum1);
	}
	else{
		for(int i=0; i<n-k; i++){
			sum1 += a[i];
		}
		for(int i=n-k; i<n; i++){
			sum2 += a[i];
		}
		cout<<(sum2-sum1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		chiaMang(n,k,a);
		cout<<endl;
	}
 	return 0;
}
