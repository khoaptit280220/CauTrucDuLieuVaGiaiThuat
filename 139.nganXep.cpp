#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	vector<int> v;
	while(cin>>s){
		if(s == "push"){
			int k;
			cin>>k;
			v.push_back(k);
		}
		if(s == "show"){
			if(!v.empty()){
				for(int i=0; i<v.size(); i++){
					cout<<v[i]<<" ";
				}
				cout<<endl;
			}
			else cout<<"empty"<<endl;
		}
		if(s == "pop"){
			if(!v.empty()){
				v.pop_back();
			}
		}
	}
 	return 0;
}

