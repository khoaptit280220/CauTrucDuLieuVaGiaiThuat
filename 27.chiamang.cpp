#include<bits/stdc++.h>
using namespace std;
void chiamang(int n, int k, int a[]){
	long sum=0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	if(sum%k != 0){
		cout<<"0";
	}
	else{
		for(int i=0; i<n; i++){
			if(a[i]> sum/k){
				cout<<"0";
				break;
			}
			 if(a[i] <= sum/k){
				cout<<"1";
				break;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		chiamang(n,k,a);
		cout<<endl;
	}
 	return 0;
}
