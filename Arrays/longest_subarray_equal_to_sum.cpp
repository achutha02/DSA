#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,3,5,1,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int length=0;
	int target=10;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
				if(sum==target){
					int currLength=j-i+1;
					if(currLength>length){
						length=currLength;
					}
				}
			}
		}
	}
	cout << length;
	return 0;
}
