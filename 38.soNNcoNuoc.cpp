#include<bits/stdc++.h>
using namespace std;
long long demUoc(long long temp){	
	long long dem = 0;
	for(long long i = 1; i<=temp/2; i++){
		if(temp % i == 0) dem++;
	}
	return (dem + 1);
}
long long tim_K(long long n){
	long long temp = 1;
	long long kq = 0;
	while(1){
		if(demUoc(temp) == n){
			kq = temp;
			break;
		}
		temp++;
	}
}
int main(){
	int test;
	cin>>test;
	while(test--){
		long long n;
		cin>>n;
		cout<<tim_K(n)<<endl;
	}
 	return 0;
}
