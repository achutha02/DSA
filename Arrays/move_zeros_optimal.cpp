#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,0,2,3,0,4,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int j=-1;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			j=i;
			break;
		}
	}
	if(j==-1){
		cout << "No Zeros in given array";
	}
	for(int i=j+1;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[j]);
			j++;
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
