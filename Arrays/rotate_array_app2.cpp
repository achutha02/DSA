#include <bits/stdc++.h>
using namespace std;

void Reverse(vector<int> &arr,int start, int end){
	int left = start;
	int right = end;
	while(left <= right){
		swap(arr[left], arr[right]);
		left++;
		right--;
	}
}

void rotateLeftRight(vector<int> &arr, int n, int k){
	Reverse(arr,0,n-k-1);
	
	Reverse(arr,n-k,n-1);
	
	Reverse(arr,0,n-1);
} 
int main(){
	vector<int> arr = {1,2,3,4,5,6,7};
	int n = arr.size();
	int k=2;
	rotateLeftRight(arr,n,k);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
