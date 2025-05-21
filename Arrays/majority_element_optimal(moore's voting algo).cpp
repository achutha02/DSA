#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,2,1,1,1,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	int el;
	for(int i=0;i<n;i++){
		if(count==0){
			count=1;
			el=arr[i];
		}
		else if(arr[i]==el){
			count++;
		}
		else{
			count--;
		}
	}
	int count1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==el){
			count1++;
		}
	}
	if(count1>n/2){
		cout << el;
	}
	else{
		cout << -1;
	}
	return 0;
}
