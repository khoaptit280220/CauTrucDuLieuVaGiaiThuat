#include<bits/stdc++.h>
using namespace std;
void sxCV(int n, int s[], int f[]){
	int dem = 0;
	vector<int> v;
	for(int i = 0; i<n; i++){
		
		for(int j = 0; j<n; j++){
			
			if(f[i]+1 == s[j]){
				
				dem++;
			}
		}	
	}
	cout<<dem;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n], f[n];
		for(int i=0; i<n; i++){
			cin>>s[i];
		}
		for(int i=0; i<n; i++){
			cin>>f[i];
		}
		sxCV(n,s,f);
		cout<<endl;
	}
 	return 0;
}

