#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[3][3]={{1,1,1},{1,0,1},{1,1,1}};
	int m=3;
	int n=3;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
