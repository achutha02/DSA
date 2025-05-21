#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=36;
	for(int i=1;i<=n;i++){
		if(n%i==0 && i%2==1){
			bool isPrime=true;
			if(i<2){
				isPrime=false;
			}
			for(int j=2;j<i;j++){
				if(i%j==0){
					isPrime=false;
					break;
				}
			}
			if(isPrime){
				cout << i << " ";
			}
		}
	}
}
