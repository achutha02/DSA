#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int arr2[]={2,3,4,4,5,11,12};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	vector<int> Union;
	int i=0;
	int j=0;
	while(i<n && j<m){
		if(arr1[i] <= arr2[j]){
			if(Union.size()==0 || Union.back() != arr1[i]){
				Union.push_back(arr1[i]);
			}
			i++;
		}
		else{
			if(Union.size()==0 || Union.back() != arr2[j]){
				Union.push_back(arr2[j]);
			}
			j++;
		}
	}
	while(i<n){
		if(Union.back() != arr1[i]){
			Union.push_back(arr1[i]);
			i++;
		}
	}
	while(j<m){
		if(Union.back() != arr2[j]){
			Union.push_back(arr2[j]);
			j++;
		}
	}
	for(int i=0;i<Union.size();i++){
		cout << Union[i] << " ";
	}
	return 0;
}
