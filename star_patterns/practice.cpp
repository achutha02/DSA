#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={2,6,5,8,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int target=14;
	unordered_map <int,int> mpp;
	for(int i=0;i<n;i++){
		int num=arr[i];
		int moreNeeded=target-num;
		if(mpp.find(moreNeeded) != mpp.end()){
			cout << mpp[moreNeeded] << " " << i;
			break;
		}
		mpp[num]=i;
	}
	return 0;
}
