#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,6,5,8,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int left=0;
	int right=n-1;
	int target=14;
	while(left<right){
		int sum=arr[left] + arr[right];
		if(sum==target){
			cout << arr[left] << " " << arr[right];
			break;
		}
		else if(sum<target){
			left++;
		}
		else{
			right--;
		}
	}
	return 0;
}
