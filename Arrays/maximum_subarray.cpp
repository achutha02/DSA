#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max_sum=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum+=arr[k];
			}
			if(sum>max_sum){
				max_sum=sum;
			}
		}
	}
	cout << max_sum;
	return 0;
}
