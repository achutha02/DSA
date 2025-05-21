#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={-1,1,1};
	int k=1;
	int sum=0;
	int length=0;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		sum += arr[i];
		length++;
		if(sum==k){
			break;
		}
	}
	cout << length << endl;
	return 0;
}
