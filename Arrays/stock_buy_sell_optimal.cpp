#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int max=0;
	int maxPro;
	int min=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		max=arr[i]-min;
		if(max>maxPro){
			maxPro=max;
		}
	}
	cout << maxPro << endl;
	return 0;
}
