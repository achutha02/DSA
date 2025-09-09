#include <bits/stdc++.h>
using namespace std;


void explainMultiSet(){
	// Everything is same as set
	// only stores duplicate also
	
	multiset<int> ms;
	ms.insert(1); // {1}
	ms.insert(1); // {1, 1}
	ms.insert(1); // {1, 1, 1}
	
	ms.erase(1); // all 1's erased
	
	int cnt = ms.count(1);
	
	//only a single one erased
	ms.erase(ms.find(1)); // multiset.find() returns an iterator which points to that address
	
	ms.erase(ms.find(1), ms.find(1)+2);
	
	// rest all function same as set
}
int main(){
	
	return 0;
}
