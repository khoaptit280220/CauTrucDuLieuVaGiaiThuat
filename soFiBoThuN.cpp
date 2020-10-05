#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
void fibonacci(long long n){
	stack<long long > a;
	a.push(0);
	a.push(1);
	while(n>1){
		long long x = a.top();
		a.pop();
		long long y = a.top();
		a.pop();
		long long sum = (x + y)%M;
		n--;
		if(n == 1){
			cout << sum;
			return;
		}
		a.push(y);
		a.push(x);
		a.push(sum);
	}
}
int main(){
	int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        fibonacci(n);
        cout<<endl;
    }
 	return 0;
}
