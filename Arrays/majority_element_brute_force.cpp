#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,4,2,4,3,4,4,3,2,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				cnt++;
			}
		}
		if(cnt>(n/2)){
			cout << arr[i];
			break;
		}
	}
	return 0;
}
