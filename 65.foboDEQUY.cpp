#include<bits/stdc++.h>
using namespace std;
string fibo(int n){
	if(n==1) return "A";
	else if(n==2) return "B";
	else return fibo(n-2) + fibo(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i;
		cin>>n>>i;
		string temp = fibo(n);
		cout<<temp[i-1]<<endl;
	}
}
