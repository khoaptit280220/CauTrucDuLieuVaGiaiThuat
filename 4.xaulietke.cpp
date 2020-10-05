#include<bits/stdc++.h>
using namespace std;
string xaucododain(int n, string s){
	int f=0;
	for(int i=n-1; i>=0; i--){
		if(s[i]=='A'){
			f=i;
			break;
		}
	}
	s[f]='B';
	for(int i=f+1; i<n; i++){
		s[i]='A';
	}
	return s;
}
bool check(string s){
	for(int i = 0; i<s.size(); i++){
		if(s[i] == 'A'){
			return false;
			break;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s = "";
		for(int i=0; i<n; i++){
			s += 'A';
		}
		cout<<s<<" ";
		while(check(s) == false){
			string a = xaucododain(n, s);
			cout<<a<<" ";
			s = a;
		}
		cout<<endl;
	}
 	return 0;
}
