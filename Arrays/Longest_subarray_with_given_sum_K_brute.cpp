#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,2,3,1,1,1,1,4,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=3;
	int max_count=0;
	for(int i=0;i<n;i++){
		int count=0;
		int sum=0;
		for(int j=i;j<n;j++){
			sum += arr[j];
			count++;
			if(sum == target && count > max_count){
				max_count = count;
			}
		}
	}
	cout << max_count;
	return 0;
}
