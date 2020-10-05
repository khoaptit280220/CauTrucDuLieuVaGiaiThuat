#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<int> q;
		int m;
		while(n>0){
			cin>>m;
			if(m == 1){
				cout<< q.size()<< endl;
				n--;
			}
			if(m==2){
				if(!q.empty()){
					cout<<"NO"<<endl;
				}
				else cout<<"YES"<<endl;
				n--;
			}
			if(m== 3){
				int k;
				cin>>k;
				q.push(k);
				n--;
			}
			if(m == 4){
				if(!q.empty()){
					q.pop();
				}
				n--;
			}
			if(m== 5){
				if(!q.empty()) cout<<q.front()<<endl;
				else cout<<"-1"<<endl;
				n--;
			}
			if(m==6){
				if(!q.empty()){
					cout<<q.back()<<endl;
				}
				else cout<<"-1"<<endl;
				n--;
			}
		}
	}
 	return 0;
}

