#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,0,2,3,0,4,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> v;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			v.push_back(arr[i]);
		}
	} 
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			v.push_back(arr[i]);
		}
	}
	for(int i=0;i<n;i++){
		arr[i]=v[i];
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}
