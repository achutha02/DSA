#include <bits/stdc++.h>
using namespace std;

int main(){
	int iniS=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5-i;j++){
			cout << "*";
		}
		for(int k=0;k<iniS;k++){
			cout << " ";
		}
		for(int l=0;l<5-i;l++){
			cout << "*";
		}
		iniS +=2;
		cout << endl;
	}
	int iniS1=8;
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			cout << "*";
		}
		for(int k=0;k<iniS1;k++){
			cout << " ";
		}
		for(int l=0;l<=i;l++){
			cout << "*";
		}
		iniS1 -=2;
		cout << endl;
	}
}
