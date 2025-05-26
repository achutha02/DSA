#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> A={2,1,5,4,3,0,0};
	int n=A.size();
	int ind=-1;
	for(int i=n-2;i>=0;i--){
		if(A[i]<A[i+1]){
			ind=i;
			break;
		}
	}
	if(ind==-1){
		reverse(A.begin(),A.end());
		for(int i=0;i<n;i++){
			cout << A[i] << " ";
			break;
		}
	}
	for(int i=n-1;i>ind;i--){
		if(A[i]>A[ind]){
			swap(A[i],A[ind]);
			break;
		}
	}
	reverse(A.begin()+ind+1,A.end());
	for(int i=0;i<n;i++){
		cout << A[i] << " ";
	}
	return 0;
}
