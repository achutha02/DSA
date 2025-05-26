#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int k=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> rotated(n);
	for(int i=0;i<n;i++){
		rotated[(i+k)%n]=arr[i];
	}
	for(int i=0;i<rotated.size();i++){
		cout << rotated[i] << " ";
	}
	return 0;
}
