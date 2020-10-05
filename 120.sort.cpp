#include<bits/stdc++.h>
using namespace std;
bool kt[100];
vector<int> v;
void tach(long long n){
	while(n>0){
		if(kt[n%10]== false){
			v.push_back(n%10);
			kt[n%10]= true;
		}
		n=n/10;
	}
}
void Try(long n, long long a[]){
	for(long i=0; i<n; i++){
		tach(a[i]);
	}
	sort(v.begin(), v.end());
	for(long i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		v.clear();
		long long  a[n];
		memset(kt, false, sizeof(kt));
		for(long i=0; i<n; i++) cin>>a[i];
		Try(n,a);
		cout<<endl;
	}
 	return 0;
}

