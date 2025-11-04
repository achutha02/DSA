#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,6,5,8,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	unordered_map<int,int> mpp;
	int target=14;
	for(int i=0;i<n;i++){
		int num=arr[i];
		int moreNeeded=target-num;
		if(mpp.find(moreNeeded) != mpp.end()){
			cout << mpp[moreNeeded] << " "<< i << endl;
			break;
		}
		mpp[num]=i;
	}
	return 0;
}
