#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

main(){
	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int> > L;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		L.push(x);
	}
	long long s = 0;
	while(1){
		long long x = L.top(), y = 0;
		L.pop();
		y = L.top();
		L.pop();
		long long tem = (x+y)%M;
		s = (s+tem)%M ;
		if(L.size() == 0)	break;
		L.push(tem);
	}
	cout << s << endl;
}
