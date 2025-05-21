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
	
	int hash[13] ={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]+=1;
	}
	cout << "Enter the size of queries";
	int q;
	cin >> q;
	while(q--){
		int number;
		cin >> number;
		cout << hash[number] << endl;
	}
	
}
