#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	stack<int> v;
	while(n>0){
		cin>>s;
		if(s =="PUSH"){
			int k;
			cin>>k;
			v.push(k);
			n--;
		}
		if(s == "POP"){
			if(!v.empty()){
				v.pop();
			}
			n--;
		}
		if(s == "PRINT"){
			if(!v.empty()){
				cout<<v.top()<<endl;
			}
			else cout<<"NONE"<<endl;
			n--;
		}
	}
 	return 0;
}

