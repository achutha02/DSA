#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,6,5,8,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=15;
	bool found=false;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==target && arr[j]!=arr[i]){
				cout << arr[i] << " " << arr[j];
				found=true;
				break;
			}
		}
		if(found){
			break;
		}
	}
	if(!found){
		cout << -1 << " " << -1 << endl; 
	}
	return 0;
}
