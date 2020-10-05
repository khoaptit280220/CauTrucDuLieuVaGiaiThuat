#include<bits/stdc++.h>
using namespace std;
void sx(int n, int a[], int x){
	vector<int> v1;
	vector<int> v2;
	for(int i = 0; i<n; i++){
		int temp = abs(a[i] - x);
		v1.push_back(a[i]);
		v2.push_back(temp);
	}
	//for(int i = 0; i<v1.size(); i++) cout<<v1[i]<<" "<<v2[i]<<endl;
	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			if(v2[i] > v2[j]){
				swap(v2[i], v2[j]);
				swap(v1[i], v1[j]);
			}
			else if(v2[i] == v2[j]){
				if(v1[i] > v1[j]){
					swap(v1[i], v1[j]);
				}
			}
		}
	}
	for(int i = 0; i<v1.size(); i++) cout<<v1[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sx(n, a, x);
		cout<<endl;
	}
 	return 0;
}

