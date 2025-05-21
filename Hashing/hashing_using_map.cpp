#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the size of the array";
	int n;
	cin >> n;
	cout << "Enter the array elements";
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	map<int,int> mpp;
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	
	cout << "Enter the number of queries";
	int q;
	cin >> q;
	cout << "Enter the elements";
	while(q--){
		int number;
		cin >> number;
		cout << mpp[number] << endl;
	}
}
