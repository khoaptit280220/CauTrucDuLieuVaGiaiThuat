#include<bits/stdc++.h>
using namespace std;
void timKiem(long long k, long long a[], long long l, long long r){
	bool kt = false;
    while (l <= r) {
        long m = (l + r) / 2;
        if (a[m] == k) {
            kt = true;
        }
        if (a[m] < k)
            l = m + 1;
        else
            r = m - 1;
    }
    if(kt) cout<<1<<endl;
    else cout<<-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(long i=0; i<n; i++)  cin>>a[i];
		timKiem(k,a,0,n-1);
	}
 	return 0;
}

