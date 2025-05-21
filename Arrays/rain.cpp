#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter 1 if it is raining & 0 if it is not"
	int rain;
	cin >> rain;
	if(rain==1){
		rain=0;
		cout << "Rain stopped";
	}
	else{
		rain=1;
		cout << "Rain started";
	}
}
