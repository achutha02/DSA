#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a={1,2,3,1,1,1,1,4,2,3};
	map<int,int>preSumMap;
	int k=3;
	int sum=0;
	int maxLen=0; 
	for(int i=0;i<a.size();i++){
		sum+=a[i];
		if(sum==k){
			maxLen=max(maxLen,i+1);
		}
		int rem=sum-k;
		if(preSumMap.find(rem) != preSumMap.end()){
			int len=i-preSumMap[rem];
			maxLen=max(maxLen,len);
		}
		if(preSumMap.find(sum)==preSumMap.end()){
			preSumMap[sum]=i;
		}
	}
	cout << maxLen;
	return 0;
}
