#include<bits/stdc++.h>
using namespace std;
int partition(int a[], int l, int r){
	int p=a[r];
	int left=l;
	int right=r-1;
	while(true){
        while(left <= right && a[left] < p) left++;
        while(right >= left && a[right] > p) right--;
        if (left >= right) break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[r]);
    return left;
}
void quickSort(int a[], int l, int r){
	if(l<r){
		int pt= partition(a, l, r);
		quickSort(a, l, pt-1);
		quickSort(a, pt+1, r);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		quickSort(a,0,n-1);
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
 	return 0;
}

