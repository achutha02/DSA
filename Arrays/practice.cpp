#include<bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the number: ";
	int n;
	cin >> n;
	int dup = n;
	int size = to_string(n).size();
	int sum = 0;
	while(n>0){
		int lastdigit = n%10;
		int result = pow(lastdigit,size);
		sum = sum+result;
		n=n/10;
	}
	if(sum==dup){
		cout << "The number is armstrong number";
	}
	else{
		cout << "The number is not armstrong number";
	}
	return 0;
}
