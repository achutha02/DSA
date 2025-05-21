#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={7,6,4,3,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min=INT_MAX;
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
			j=i;
		}
		if(arr[n-1]==min){
			cout << 0;
			break;
		}
	}
	int max=INT_MIN;
	for(int i=j;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int diff=max-min;
	cout << diff << endl;
}
