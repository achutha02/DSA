#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,0,2,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=n-1;i++){
		int j=i;
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
