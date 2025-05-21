#include <bits/stdc++.h>
using namespace std;

void func(int arr[],int l,int r){
	if(l>=r){
		return;
	}
	swap(arr[l],arr[r]);
	func(arr,l+1,r-1);
}
int main(){
	int arr[];
	cin >> arr;
	func(arr,0,sizeof(arr)-1);
	cout << "The sorted array is: ";
	cout << arr;
}
