#include<bits/stdc++.h>
using namespace std;
void meger(int a[], int l, int m, int r){
	int i,j,k;
	int n1= m-l+1;
	int n2= r-m;
	int L[n1], R[n2];
	for(int i=0; i<n1; i++){
		L[i] = a[l + i];
	}
	for(int i=0; i<n2; i++){
		R[i] = a[m+1+i];
	}
	i=0; j=0; k=l;
	while(i<n1 && j<n2){
		if(L[i]<= R[i]){
			a[k]= L[i];
			i++;
		}
		else{
			a[k]= R[j];
			j++;
		}
	}
	while(i<n1){
		a[k]= L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]= R[j];
		k++;
		j++;
	}
	
}
void megerSort(int a[], int l, int r){
	int mid= l+(r-l)/2;
	megerSort(a, l, mid);
	megerSort(a, mid +1, r);
	meger(a,l,mid, r);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		megerSort(a,0,n-1);
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
 	return 0;
}

