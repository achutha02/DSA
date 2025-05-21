#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	bool isSorted=false;
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			isSorted=false;
			break;
		}
		else{
			isSorted=true;
		}
	}
	if(isSorted==true){
		cout << "The array is sorted" << endl;
	}
	else{
		cout << "The array is not sorted" << endl;
	}
}
