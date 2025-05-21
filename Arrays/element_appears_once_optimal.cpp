#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=0;
	for(int i=0;i<n;i++){
		result ^= arr[i];
	}
	cout << result << endl;
	return 0;
}
