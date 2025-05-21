#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={13,46,24,52,20,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int j=0;
	for(int i=0;i<=n-1;i++){
		j=i;
		while(j>0 && arr[j-1]>arr[j]){
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
