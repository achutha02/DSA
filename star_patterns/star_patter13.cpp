#include <bits/stdc++.h>
using namespace std;

int num=1;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
}
