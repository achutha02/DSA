#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,4,2,4,3,4,4,3,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int hash[n]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(hash[i]>hash[i+1]){
			cout << i;
			break;
		}
	}
	return 0;
}
