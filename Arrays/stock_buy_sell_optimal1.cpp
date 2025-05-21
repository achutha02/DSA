#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={7,1,5,3,6,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int minPrice=INT_MAX;
	int maxPro=0;
	for(int i=0;i<n;i++){
		minPrice=min(arr[i],minPrice);
		maxPro=max(maxPro,arr[i]-minPrice);
	}
	cout << maxPro << endl;
	return 0;
}
