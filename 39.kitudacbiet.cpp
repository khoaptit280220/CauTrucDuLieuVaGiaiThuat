#include<bits/stdc++.h>
using namespace std;
void bai39(string s, int n){
	if(s.size() >= n) {
		cout<<s[n-1];
		return;
	}
	else{
		string temp = s;
		temp.erase(temp.begin() + temp.size() - 1);
		s = s + s[s.size() - 1] + temp;
		bai39(s, n);
	}
}
int main(){
	string s;
	int n;
	cin>>s>>n;
	bai39(s, n);
 	return 0;
}
