#include<bits/stdc++.h>
using namespace std;
int timMax(string s){
	int m = s[0];
	int f=0;
	for(int i=0; i<s.size(); i++){
		if(s[i] >m ){
			m=s[i];
			f=i;
		}
	}
	return m;
}
void doicho(int n, string s){
	int i=0;
	while(n>0){
		for(int j=s.size()-1; j>=0; j--){
			if(s[i]<s[j]){
				swap(s[i], s[j]);
				i++;
				n--;
			}
		}
	}
	cout<<s;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		doicho(n,s);
		cout<<endl;
	}
 	return 0;
}

