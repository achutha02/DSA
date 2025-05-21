#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int num=3;
	for(int i=0;i<n;i++){
		if(arr[i]==num){
			cout << i;
			break;
		}
	}
}
