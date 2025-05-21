#include <bits/stdc++.h>
using namespace std;

int main(){
	int iniS=2*5-2;
	for(int i=1;i<=2*5-1;i++){
		int stars=i;
		if(i>5){
			stars=2*5-i;
		}
		for(int j=1;j<=stars;j++){
			cout << "*";
		}
		for(int k=1;k<=iniS;k++){
			cout << " ";
		}
		for(int l=1;l<=stars;l++){
			cout << "*";
		}
		cout << endl;
		if(i<5){
			iniS -=2;
		}
		else{
			iniS +=2;
		}
	}
}
