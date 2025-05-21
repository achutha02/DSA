#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(count==1){
			cout << arr[i] << endl;
		}
	}
}
