#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={13,46,24,52,20,9};
	for(int i=0;i<=6-2;i++){
		int mini=i;
		for(int j=i;j<=6-1;j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		int temp=arr[mini];
		arr[mini]=arr[i];
		arr[i]=temp;
	}
	for(int i=0;i<6;i++){
		cout << arr[i] << " ";
	}
}
