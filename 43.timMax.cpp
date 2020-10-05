#include<bits/stdc++.h>
using namespace std;
void timMax(long long n, long long a[]){
	sort(a, a+n);
	long long M = pow(10,9)+7;
	long long sum = 0;
	long long kq;
	for(long long i=0; i<n; i++){
		sum += i*a[i];
	}
	cout<<sum%M;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		timMax(n,a);
		cout<<endl;
	}
 	return 0;
}
