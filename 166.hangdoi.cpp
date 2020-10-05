#include<bits/stdc++.h>
using namespace std;
void bai4(string s, int k){
	long long n=s.length();
	if(k<=n){
		priority_queue<long long,vector<long long> > a;
		int d[500]={0};
		for(int i=0;i<n;i++){
			d[s[i]]++;
		}
		for(int i=0;i<n;i++){
			if(d[s[i]]>0)a.push(d[s[i]]);
			d[s[i]]=0;
		}
		while(k--){
			long long tmp=a.top();
			a.pop();
			tmp--;
			a.push(tmp);
		}
		long long kq=0;
		while(a.size()>0){
			long long tmp=a.top();
			a.pop();
			kq+=tmp*tmp;
		}
		cout<<kq<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long k;
		cin>>k;
		string s;
		cin>>s;
		bai4(s,k);
	}
return 0;
}
