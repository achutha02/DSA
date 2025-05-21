#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={1,2,4,7,7,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
    if (n == 0 || n == 1) {
        cout << -1 << " " << -1 << endl;
        return 0;
    }
	int small=arr[1];
	int large=arr[n-2];
	cout << "second smallest is: " << small <<endl;
	cout << "second largest is: " << large << endl; 
}
