#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {10,22,12,3,0,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> ans;
	for(int i=0;i<n;i++){
		bool leader = true;
		for(int j=i+1;j<n;j++){
			if(arr[j] > arr[i]){
				leader=false;
				break;
			}
		}
		if(leader == true){
			ans.push_back(arr[i]);	
		}
	}
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
	}
	return 0;
}
