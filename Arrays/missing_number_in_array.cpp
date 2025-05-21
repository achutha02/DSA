#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]!=i){
			cout << i;
			break;
		}
	}
	return 0;
}
