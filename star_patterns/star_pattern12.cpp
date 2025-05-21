#include <bits/stdc++.h>
using namespace std;

int num=1;
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=i;j++){
			cout << j;
			num=num+1;
		}
		for(int k=0;k<(2*4)-(2*i);k++){
			cout << " ";
		}
		for(int l=i;l>=1;l--){
			cout << l;
		}
		cout << endl;
	}
}
