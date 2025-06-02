#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={100,4,200,1,3,2};
	int n=arr.size();
	sort(arr.begin(),arr.end());
	int max_count=1;
	int count=1;
	for(int i=0;i<n;i++){
		int j=i+1;
		if(arr[i]==arr[j]-1){
			count++;
			j++;
			if(count>max_count){
				max_count=count;
			}
		}
	}
	cout << max_count;
	return 0;
}
