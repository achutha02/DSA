#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,4,2,4,3,4,4,3,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	for(auto it:mpp){
		if(it.second>(n/2)){
			cout << it.first;
			break;
		}
	}
	return 0;
}
