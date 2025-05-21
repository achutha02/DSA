#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> freq;
	vector<int> Union;
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr2[]={2,3,4,4,5,11,12};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	for(int i=0;i<n;i++){
		freq[arr1[i]]++;
	}
	for(int i=0;i<m;i++){
		freq[arr2[i]]++;
	}
	for(auto &it:freq){
		Union.push_back(it.first);
	}
	for(int i=0;i<Union.size();i++){
		cout << Union[i] << " ";
	}
	return 0;
}
