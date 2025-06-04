#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
	vector<int> temp;
	int left=low;
	int right=mid+1;
	while(left<=mid && right<=high){
		if(arr[left]<arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		temp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		temp.push_back(arr[right]);
		right++;
	}
	for(int i=low;i<=high;i++){
		arr[i]=temp[i-low];
	}
}
void merge_sort(vector<int> &arr,int low, int high){
	if(low>=high){
		return;
	}
	int mid=(low+high)/2;
	merge_sort(arr,low,mid);
	merge_sort(arr,mid+1,high);
	merge(arr,low,mid,high);
}
int main(){
	vector<int> arr={9, 4, 7, 6, 3, 1, 5};
	int n=7;
	cout << "Before merge sort" << endl;
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	merge_sort(arr,0,n-1);
	cout << "After merge sort" << endl;
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
	
}




/*
merge_sort(0,6)
+-- merge_sort(0,3)
¦   +-- merge_sort(0,1)
¦   ¦   +-- merge_sort(0,0) -> returns
¦   ¦   +-- merge_sort(1,1) -> returns
¦   ¦   +-- merge(0,0,1)
¦   +-- merge_sort(2,3)
¦       +-- merge_sort(2,2) -> returns
¦       +-- merge_sort(3,3) -> returns
¦       +-- merge(2,2,3)
¦   +-- merge(0,1,3)
+-- merge_sort(4,6)
    +-- merge_sort(4,5)
    ¦   +-- merge_sort(4,4) -> returns
    ¦   +-- merge_sort(5,5) -> returns
    ¦   +-- merge(4,4,5)
    +-- merge_sort(6,6) -> returns
    +-- merge(4,5,6)
+-- merge(0,3,6)
*/
