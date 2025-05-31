#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={4,7,1,0};
	int n=arr.size();
	int ind=n-1;
	vector<int> arr1;
	arr1.push_back(arr[ind]);
	for(int i=n-1;i>0;i--){
		if(arr[i-1]>arr[ind]){
			arr1.push_back(arr[i-1]);
			ind=i;
			ind--;
		}
	}
	for(int i=0;i<arr1.size();i++){
		cout << arr1[i] << " ";
	}
	return 0;
}
