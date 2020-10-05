#include<bits/stdc++.h>
using namespace std;
void hopgiao(int n, int k, int a[], int b[]){
	vector<int> h;
	vector<int> g;
	vector<int> hop;
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			if(a[i]== b[j]){
				g.push_back(a[i]);
			}
		}
	}
	for(int i=0; i<n; i++){
		h.push_back(a[i]);
	}
	for(int i=0; i<k; i++){
		h.push_back(b[i]);
	}
	sort(h.begin(), h.end());
	for(int i=0; i< h.size(); i++){
		if(h[i] != h[i+1]){
			hop.push_back(h[i]);
		}
	}
	for(int i=0; i<hop.size(); i++){
		cout<<hop[i]<<" ";
	}
	cout<<endl;
	for(int i=0; i<g.size(); i++){
		cout<<g[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n], b[k];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<k; i++){
			cin>>b[i];
		}
		hopgiao(n,k,a,b);
	}
 	return 0;
}

