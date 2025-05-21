#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={3,1,-2,-5,2,-4};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> pos;
	vector<int> neg;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			pos.push_back(arr[i]);
		}
		else{
			neg.push_back(arr[i]);
		}
	}
	for(int i=0;i<n-2;i++){
		arr[2*i]=pos[i];
		arr[2*i+1]=neg[i];
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
