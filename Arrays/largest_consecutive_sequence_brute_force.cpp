#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr={102,4,100,1,101,3,2,1,1};
	int n=arr.size();
	sort(arr.begin(),arr.end());
	int count=1;
	int max_count=1;
	for(int i=0;i<n;i++){
		int j=i+1;
		if(arr[i]==arr[j]-1){
			count++;
			j++;
			if(count>max_count){
				max_count=count;
			}
		}
		else if(arr[i]==arr[j]){
			j++;
		}
	}
	cout << max_count;
	return 0;
}
