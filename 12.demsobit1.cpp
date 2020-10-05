#include<bits/stdc++.h>
using namespace std;
string xaucododain(int n, string s){
	int f=0;
	for(int i=n-1; i>=0; i--){
		if(s[i]=='0'){
			f=i;
			break;
		}
	}
	s[f]='1';
	for(int i=f+1; i<n; i++){
		s[i]='0';
	}
	return s;
}
bool check(string s){
	for(int i = 0; i<s.size(); i++){
		if(s[i] == '0'){
			return false;
			break;
		}
	}
	return true;
}
int ktra(string s){
	int dem = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]== '1'){
			dem++;
		}
	}
	return dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string s = "";
		for(int i=0; i<n; i++){
			s += '0';
		}
		while(check(s) == false){
			string a = xaucododain(n, s);
			if(ktra(a)== k){
				cout<<a<<endl;
			}
			s = a;
		}
	}
 	return 0;
}
