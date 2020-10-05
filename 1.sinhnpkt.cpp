#include<bits/stdc++.h>
using namespace std;
void sinhnpkt(string s){
	int f=0;
	bool kt = false;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i] == '0'){
			f=i;
			kt = true;
			break;
		}
	}
	if(kt==false){
		for(int i=0; i<s.size(); i++){
			s[i]='0';
		}
	}
	else{
		s[f]='1';
		for(int i=f+1; i<s.size(); i++){
			s[i]='0';
		}
	}
	cout<<s;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		string s;
		cin>>s;
		sinhnpkt(s);
		cout<<endl;
	}
 	return 0;
}

