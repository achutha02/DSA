#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int dup=n;
	int size=sizeof(n);
	int sum=0;
	int revNum=0;
	while(n>0){
		int lastdigit=n%10;
		double x=lastdigit, y=size;
		int result= pow(x,y);
		sum=sum+result;
		n=n/10;
	}
	if(sum==dup){
		cout << "The number is armstrong number";
	}
	else{
		cout << "The number is not armstrong";
	}
}
