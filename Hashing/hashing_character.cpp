#include <bits/stdc++.h>
using namespace std;

int main(){
	cout << "Enter a string";
	string s;
	cin >> s;
	
	int hash[26]={0};
	for(int i=0;i<s.size();i++){
		hash[s[i]-'a']++;
	}
	
	cout << "Enter number of queries";
	int q;
	cin >> q;
	while(q--){
		char c;
		cin >> c;
		cout << hash[c-'a'] << endl;
	}
}
