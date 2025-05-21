#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={3,4,5,1,2};
	int count=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		if(arr[i]>arr[(i+1)%n]){
			count++;
		}
	}
	if(count>1){
		cout << "The array is not sorted";
	}
	else{
		cout << "The array is sorted";
	}
}
