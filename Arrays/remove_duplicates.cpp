#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,1,2,2,2,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	set<int> st;
	for(int i=0;i<n;i++){
		st.insert(arr[i]);
	}
	int k=st.size();
	int j=0;
	for(int elements:st){
		arr[j]=elements;
		j++;
	}
	for(int i=0;i<k;i++){
		cout << arr[i] << " ";
	}
}
