#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
	int n=nums.size();
	int longest=1;
	unordered_set<int> st;
	for(int i=0;i<n;i++){
		st.insert(nums[i]);
	}
	for(auto it:st){
		if(st.find(it-1)==st.end()){
			int count=1;
			int x=it;
			while(st.find(x+1)!=st.end()){
				x=x+1;
				count++;
			}
			if(count>longest){
				longest=count;
			}
		}
	}
	cout << longest << endl;
	return 0;
}
