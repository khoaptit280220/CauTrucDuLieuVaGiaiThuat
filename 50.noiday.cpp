#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		priority_queue<int, vector<int>, greater<int> > L;
		for(int i = 0; i<n; i++) {
			int x;
			cin>>x;
			L.push(x);
		}
		long long sum = 0;
		while(1){
			int temp1 = L.top();
			L.pop();
			int temp2 = L.top();
			L.pop();
			sum += temp1 + temp2;
			if(L.size() == 0) break;
			L.push(temp1 + temp2);
		}
		cout<<sum<<endl;
	}
 	return 0;
}
