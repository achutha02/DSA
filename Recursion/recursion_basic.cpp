#include <bits/stdc++.h>
using namespace std;

int counter=0;
void func(){
	if(counter==3) return;
	cout << counter << " ";
	counter++;
	func();
}
int main(){
	func();
}
