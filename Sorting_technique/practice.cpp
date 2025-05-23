#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &arr,int low,int high){
	int pivot=arr[low];
	int i=low;
	int j=high;
	while(i<j){
		while(arr[i]<=pivot && i<=high-1){
			i++;
		}
		while(arr[j]>=pivot && j>=low+1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[low],arr[j]);
	return j;
}
void quick_sort(vector<int> &arr,int low,int high){
	if(low<high){
		int pIndex=func(arr,low,high);
		quick_sort(arr,low,pIndex-1);
		quick_sort(arr,pIndex+1,high);
	}
}
int main(){
	vector<int> arr={4,6,2,5,7,9,1,3};
	int n=arr.size();
	cout << "Before Quick Sort" << endl;
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	quick_sort(arr,0,n-1);
	cout << endl;
	cout << endl;
	cout << "After Quick Sort" << endl;
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	
}
