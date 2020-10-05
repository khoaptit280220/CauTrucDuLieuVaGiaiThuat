#include<bits/stdc++.h>
using namespace std;
void hoanvinguoc(int n){
	int a[1000], ok=1;
	for(int i=1; i<=n; i++){
		a[i]=n-i+1;
	}
	while(ok==1){
		for(int i=1; i<=n; i++){
			cout<< a[i];
		}
		cout<<" ";
		int i = n-1;
		while( i > 0 && a[i] < a[i+1])	i--;
		if ( i == 0) ok = 0;
		else{
			int k = n;
			while( a[i] < a[k])	k--;
			swap(a[i] , a[k]);
			int r = n, l = i + 1;
			while( l <= r){
				swap(a[r], a[l]);
				r--;
				l++;
			}
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin >> n;
		hoanvinguoc(n);
		cout<<endl;
	}
	return 0;
}
