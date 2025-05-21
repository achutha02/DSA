#include <bits/stdc++.h>
using namespace std;

int func(int num,int arr[]){
	int count=0;
	for(int i=0;i<sizeof(arr);i++){
		if(arr[i]==num){
			count++;
		}
	}
	return count;
}
int main(){
	cout << "Enter the size of the array";
	int n;
	cin >> n;
	cout << "Enter the number to find";
	int num;
	cin >> num;
	cout << "Enter the array";
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	cout << func(num,arr);
}
