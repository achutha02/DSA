#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,4,7,7,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=INT_MIN;
	int min=INT_MAX;
	if(n==0 || n==1){
		cout << -1 << " " << -1 << endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout << "first largest number is: " << max << endl;
	cout << "first smallest number is: " << min << endl;
	int second_max=INT_MIN;
	int second_min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<second_min && arr[i]!=min){
			second_min=arr[i];
		}
		if(arr[i]>second_max && arr[i]!=max){
			second_max=arr[i];
		}
	}
	cout << "second largest number is: " << second_max << endl;
	cout << "second smallest number is: " << second_min << endl;
}
