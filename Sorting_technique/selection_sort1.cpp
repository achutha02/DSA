#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int mini=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		int temp=arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
}
int main(){
	int arr[]={9,46,24,52,20,13};
	int n=sizeof(arr)/sizeof(arr[0]);
	selection_sort(arr,n);
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}
