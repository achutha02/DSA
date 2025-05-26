#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,4,5};
	int n=5;
	int sum=(n*(n+1)/2);
	int s2=0;
	for(int i=0;i<n;i++){
		s2 =s2+arr[i];
	}
	int missingNum=sum-s2;
	cout << missingNum;
}
