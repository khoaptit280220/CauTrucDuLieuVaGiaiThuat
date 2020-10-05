#include<bits/stdc++.h>
using namespace std;
void thucHien(int a[], int n){
	vector<int> v;
	while(n > 0){
		for(int i = 0; i<n; i++){
			v.push_back(a[i]);
		}
		for(int i = 0; i<n; i++){
			a[i] = a[i] + a[i+1];
		}
		n = n - 1;
	}
	int temp = 1;
	int m = v.size();
	while(m>0){
		cout<<"[";
		for(int i = m - temp; i<m-1; i++){
			cout<<v[i]<<" ";
		}
		cout<<v[m-1]<<"] ";
		m = m - temp;
		temp++;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i<n; i++) cin>>a[i];
		thucHien(a, n);
		cout<<endl;
	}
 	return 0;
}
