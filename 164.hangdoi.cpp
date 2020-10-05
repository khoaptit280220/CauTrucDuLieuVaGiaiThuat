#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	queue<int> q;
	while(n>0){
		cin>>s;
		if(s == "PUSH"){
			int k;
			cin>>k;
			q.push(k);
			n--;
		}
		if(s == "POP"){
			if(!q.empty()){
				q.pop();
			}
			n--;
		}
		if(s == "PRINTFRONT"){
			if(!q.empty()){
				cout<<q.front()<<endl;
			}
			else cout<<"NONE"<<endl;
			n--;
		}
	}
 	return 0;
}

