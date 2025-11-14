#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {10,22,12,3,0,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> ans;
	int ind=n-1;
	ans.push_back(arr[ind]);
	for(int i=n-1;i>=0;i--){
		if(arr[i]>arr[ind]){
			ans.push_back(arr[i]);
			ind=i;
		}
	}
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
	}
	return 0;
}
