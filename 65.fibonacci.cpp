#include<bits/stdc++.h>
using namespace std;
void fibo(int n, int i){
	//string s = "";
	string f1 = "A";
	string f2 = "B";
	string f3 = "";
	for(int j = 3; j <= n; j++){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	cout<<f3[i-1]<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i;
		cin>>n>>i;
		fibo(n, i);
	}
}
