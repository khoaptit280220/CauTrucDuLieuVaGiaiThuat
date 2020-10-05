#include<bits/stdc++.h>
using namespace std;
void tapcon(int n, int a[]){
	long sum=0;
	for(int i=0; i<n; i++){
		sum += a[i];
	}
	if(sum%2 != 0){
		cout<<"NO";
	}
	else{
		for(int i=0; i<n; i++){
			if(a[i]> sum/2){
				cout<<"NO";
				break;
			}
			 if(a[i] <= sum/2){
				cout<<"YES";
				break;
			}
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		tapcon(n,a);
		cout<<endl;
	}
 	return 0;
}

