#include<bits/stdc++.h>
using namespace std;
int main(){
	string n,m;
	cin>>n>>m;
	for(int i=0; i<n.size(); i++){
		if(n[i]== '6'){
			n[i] = '5';
		}
	}
	for(int i=0; i<m.size(); i++){
		if(m[i]== '6'){
			m[i] = '5';
		}
	}
	cout<<atoi(n.c_str())+atoi(m.c_str())<<" ";
	for(int i=0; i<n.size(); i++){
		if(n[i]== '5'){
			n[i] = '6';
		}
	}
	for(int i=0; i<m.size(); i++){
		if(m[i]== '5'){
			m[i] = '6';
		}
	}
	cout<<atoi(n.c_str())+atoi(m.c_str());
 	return 0;
}

