#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[10] = {10, 5, 9, 1, 2, 4, 7, 2, 8, 6};
	for(int i = 0; i<10; i++){
		for(int j = i; j<10; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	for(int i = 0; i<10; i++) cout<<a[i]<<" ";
 	return 0;
}

