#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,4,7,7,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int small=INT_MAX;
	int second_small=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<small){
			second_small=small;
			small=arr[i];
		}
		else if(arr[i]<second_small && arr[i]!=small){
			second_small=arr[i];
		}
	}
	int large=INT_MIN;
	int second_large=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>large){
			second_large=large;
			large=arr[i];
		}
		else if(arr[i]>second_large && arr[i]!=large){
			second_large=arr[i];
		}
	}
	cout << "second smallest element is: " << second_small << endl;
	cout << "second largest element is: " << second_large << endl;
}
