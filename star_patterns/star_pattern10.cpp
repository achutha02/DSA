#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0;i<2*5-1;i++){
		int stars =i+1;
		if(i>=5){
			stars=(2*5)-(i+1);
		}
		for(int j=0;j<stars;j++){
			cout << "*";
		}
		cout << endl;
	}
}
