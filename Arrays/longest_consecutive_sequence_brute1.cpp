#include <bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int>&a,int num){
	int n=a.size();
	for(int i=0;i<n;i++){
		if(a[i]==num){
			return true;
		}
	}
	return false;
}
int longestSuccessiveElement(vector<int>&a){
	int n=a.size();
	int longest=1;
	for(int i=0;i<n;i++){
		int x=a[i];
		int cnt=1;
		while(linearsearch(a,x+1)==true){
			cnt++;
			x++;
		}
		 longest=max(cnt,longest);
	}
	return longest;
	
}
int main(){
	vector<int> arr={102,4,100,1,101,3,2,1,1};
	int ans=longestSuccessiveElement(arr);
	cout << "Longest consecutive sequecne is: " << ans << endl;
	return 0;
}
