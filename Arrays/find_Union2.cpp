#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr2[]={2,3,4,4,5,11,12};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	vector<int> Union;
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(arr1[i]);
	}
	for(int i=0;i<m;i++){
		s.insert(arr2[i]);
	}
	for(auto &it:s){
		Union.push_back(it);
	}
	for(int i=0;i<Union.size();i++){
		cout << Union[i] << " ";
	}
	return 0;
}
