#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i-1;j++){
			cout << " ";
		}
		char ch='A';
		int breakpoint=(2*i+1)/2;
		for(int k=1;k<=2*i+1;k++){
			cout << ch;
			if(k<=breakpoint) ch++;
			else ch--;
		}
		for(int l=0;l<5-i-1;l++){
			cout << " ";
		}
		cout << endl;
	}
}
