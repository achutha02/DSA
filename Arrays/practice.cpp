#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	for(auto &it:mp){
		if(it.second==1){
			cout << it.first << endl;
		}
	}
}
