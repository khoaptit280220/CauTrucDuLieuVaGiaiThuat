#include<bits/stdc++.h>
using namespace std;
bool checktang(int n, int a[]){
	for(int i=0; i<n-1; i++){
		if(a[i] > a[i+1]){
			return false;
			break;
		}
	}
	return true;
}
void latMang(int n, int a[]){
	int i=0;
	int j=n-1;
	while(i<j){
		if(a[i]>a[j]){
			swap(a[i], a[j]);
		}
		i++;
		j--;
	}
	if(checktang(n,a)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
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
		latMang(n,a);
		cout<<endl;
	}
}
