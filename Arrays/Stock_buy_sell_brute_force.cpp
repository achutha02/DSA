#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int maxPro=0;
	int max=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				max=arr[j]-arr[i];
			}
			if(max>maxPro){
				maxPro=max;
			}
		}
	}
	cout << maxPro << endl;
	return 0;
}
