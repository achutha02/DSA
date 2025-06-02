#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
	int n=arr.size();
	sort(arr.begin(),arr.end());
	int count=0;
	int longest=1;
	int lastSmaller=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]-1==lastSmaller){
			count++;
			lastSmaller=arr[i];
		}
		else if(lastSmaller!=arr[i]){
			count=1;
			lastSmaller=arr[i];
		}
		longest=max(longest,count);
	}
	cout << longest << endl;
	return 0;
}
