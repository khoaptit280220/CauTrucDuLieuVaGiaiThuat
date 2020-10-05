#include<bits/stdc++.h>
using namespace std;
void sinhtohop( int n,int k){
	int a[100],ok=1;
	for(int i=1; i<=k;i++){
		a[i]=i;
	}
	while(ok==1){
		for(int i=1; i<=k;i++){
			cout<<a[i];
		}
		cout<<" ";
		int i = k;
		while(i > 0 && a[i] == n - k + i){
			i--;
		}
		if (i > 0){
			a[i] = a[i] + 1;
			for(int j = i + 1; j <= k; j++){
				a[j] = a[i] + j - i;
			}
		}
		else ok=0;
	}
	cout<<endl;
}
int main(){
	int T;
	cin>>T;
	while(T--){
		int n,k;
		cin>>n>>k;
		sinhtohop(n, k);
	}
	return 0;
}
