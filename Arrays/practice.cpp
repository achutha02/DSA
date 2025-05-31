#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={10,22,12,3,0,6};
	int n=arr.size();
	vector<int> arr1;
	for(int i=0;i<n;i++){
		bool leader=true;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[i]){
				leader=false;
				break;
			}
		}
		if(leader){
			arr1.push_back(arr[i]);
		}
	}
	for(int i=0;i<arr1.size();i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
