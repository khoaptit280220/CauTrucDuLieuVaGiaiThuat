#include<bits/stdc++.h>
using namespace std;
bool kt(string s){
	for(int i = 0; i<s.size(); i++){
		if(s[i] < s[i+1]){
			return false;
			break;
		}
	}
	return true;
}
void sinhhoanvi(string s){
	while(1){
		cout<<s<<" ";
		int i=s.size()-2;
		while(s[i]>s[i+1] && kt(s)==false) i--;
		
		if(kt(s)==true){
			break;
		}
		else{
			int k=s.size()-1;
			while(s[i]>s[k]) k--;
			swap(s[i], s[k]);
			int r=s.size()-1;
			int l=i+1;
			while(l<=r){
				swap(s[l], s[r]);
				l++;
				r--;
			}
		}
	}
}
int main(){
	int T;
	cin>>T;
	while(T--){
		string n;
		cin >> n;
		sinhhoanvi(n);
		cout<<endl;
	}
	return 0;
}
