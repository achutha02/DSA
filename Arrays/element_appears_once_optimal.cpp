#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,1,2,1,2};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=0;
	for(int i=0;i<n;i++){
		result ^= arr[i];
	}
	cout << result << endl;
	return 0;
}

// XOR Operation is nothing but adding the numbers binary values
// for example 0--> 000, 4--> 100 adding this gives 100 which is equal to 4 and so on

/*
| A | B | A ? B (XOR) |
| - | - | ----------- |
| 0 | 0 | 0           |
| 0 | 1 | 1           |
| 1 | 0 | 1           |
| 1 | 1 | 0           |
*/

