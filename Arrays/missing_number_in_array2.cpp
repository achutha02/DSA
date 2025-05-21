#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={9,6,4,2,3,5,7,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int hash[n]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(hash[i]==0){
			cout << i;
		}
	}
	return 0;
}
