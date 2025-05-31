#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={10,22,12,3,0,6};
	int n=arr.size();
	vector<int> ans;
	int max=arr[n-1];
	ans.push_back(arr[n-1]);
	for(int i=n-2;i>=0;i--){
		if(arr[i]>max){
			ans.push_back(arr[i]);
			max=arr[i];
		}
	}
	for(int i=0;i<ans.size();i++){
		cout << ans[i] << " ";
	}
	return 0;
}
