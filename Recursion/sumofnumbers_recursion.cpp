#include <bits/stdc++.h>
using namespace std;

void func(int i,int sum){
	if(i<1){
		cout << sum;
		return;
	}
	func(i-1,sum+i);
}
int main(){
	int i;
	cin >> i;
	func(i,0);
}
