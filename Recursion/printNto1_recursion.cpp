#include <bits/stdc++.h>
using namespace std;

void func(int i, int n){
	if(i<1){
		return;
	}
	cout << i <<" ";
	func(i-1,n);
}
int main(){
	int i;
	cin >> i;
	func(i,1);
}
