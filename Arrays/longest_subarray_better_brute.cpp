#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int len=0;
	int k=3;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum==k){
				len=max(len,j-i+1);
			}
		}
	}
	cout << len;
	return 0;
}
