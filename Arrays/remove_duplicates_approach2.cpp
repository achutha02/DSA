#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,1,2,2,2,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[j]!=arr[i]){
			i++;
			arr[i]=arr[j];
		}
	}
	for(int l=0;l<=i;l++){
		cout << arr[l] << " ";
	}
	return 0;
}
