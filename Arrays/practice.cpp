#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a={1,2,3,1,1,1,1,4,2,3};
	int maxLen=0;
	int sum=0;
	int k=3;
	map<int,int> preSum;
	for(int i=0;i<a.size();i++){
		sum+=a[i];
		if(sum==k){
			maxLen=max(maxLen,i+1);
		}
		int rem=sum-k;
		if(preSum[rem] != preSum.end()){
			int len=i-preSum[rem];
			maxLen=max(maxLen,len);
		}
		if(preSum[sum] == preSum.end()){
			preSum[sum]=i;
		}
	}
	cout << maxLen;
	return 0;
}
