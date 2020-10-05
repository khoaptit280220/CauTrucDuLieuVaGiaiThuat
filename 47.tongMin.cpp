#include<bits/stdc++.h>
using namespace std;
void tongMin(long long n, long long a[], long long b[]){
	long long sum=0;
	sort(a, a+n);
	sort(b, b+n);
	int i=0;
	int j=n-1;
	while(i<n && j>=0){
		sum += a[i]*b[j];
		i++;
		j--;
	}
	cout<<sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n], b[n];
		for(long long i=0; i<n; i++){
			cin>>a[i];
		}
		for(long long i=0; i<n; i++){
			cin>>b[i];
		}
		tongMin(n,a,b);
		cout<<endl;
	}
 	return 0;
}

