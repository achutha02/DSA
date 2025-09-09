#include <bits/stdc++.h>
using namespace std;


void explainQueue(){
	queue<int> q;
	q.push(1); // {1}
	q.push(2); // {1,2}
	q.emplace(4); // {1, 2, 4}
	
	q.back() += 5;
	
	cout << q.back(); // prints 9
	
	// Q is {1,2,9}
	cout << q.front(); // prints 1
	
	q.pop(); // {2,9}
	
	cout << q.front(); // prints 2
	
	// size swap empty same as stack
	
	// Queue is always FIFO (First In First Out)
	
	// In Queue all the operations happen in O(1) or constant time complexity
}
int main(){
	
	return 0;
}
