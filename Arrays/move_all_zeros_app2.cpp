#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,0,2,3,0,4,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp=new int[];
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			temp[i]=arr[i];
		}
	}
	int nz=sizeof(temp)/sizeof(temp[0]);
	for(int i=0;i<nz;i++){
		arr[i]=temp[i];
	}
	for(int j=nz;j<n;j++){
		arr[j]=0;
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
