#include <bits/stdc++.h>
using namespace std;

int main(){
	int n1,n2;
	cin >> n1 >> n2;
	int hifactor=0;
	if(n1>n2){
		for(int i=1;i<=n1;i++){
			if(n1%i==0 && n2%i==0){
				hifactor=i;
			}
		}
	}
	else{
		for(int i=1;i<=n2;i++){
			if(n1%i==0 && n2%i==0){
				hifactor=i;
			}
		}
	}
	cout << hifactor << " ";
}
