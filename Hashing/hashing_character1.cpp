#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter the string";
	string s;
	cin >> s;
	
	int hash[256]={0};
	for(int i=0;i<s.size();i++){
		hash[s[i]]++;
	}
	
	cout << "Enter the number of queries";
	int q;
	cin >> q;
	cout << "Enter the queries";
	while(q--){
		char c;
		cin >> c;
		cout << hash[c] << endl;
	}
}
