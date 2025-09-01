#include <bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int start, int end){
	while(start<=end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
}

void rotateLeft(int arr[],int k,int n){
	// Reverse first k elements
	Reverse(arr,0,k-1);
	
	// Reverse Last n-k elements
	Reverse(arr,k,n-1);
	
	// Reverse whole array
	Reverse(arr,0,n-1);
}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	cout << "After rotating the elements: ";
	rotateLeft(arr,k,n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
