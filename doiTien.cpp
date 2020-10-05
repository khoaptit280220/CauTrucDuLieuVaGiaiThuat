#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int i = 0;
	int dem = 0;
	while(n > 0){
		//if(n == 0) break;
		if(n >= a[i]){
			n = n - a[i];
			dem++;
		}
		else{
			i++;
		}
	}
	cout<<dem;
 	return 0;
}

