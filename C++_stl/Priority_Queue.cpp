#include <bits/stdc++.h>
using namespace std;


void explainPQ(){
	// Maximum Heap
	priority_queue<int> pq;
	
	pq.push(5); // {5}
	pq.push(2); // {5, 2}
	pq.push(8); // {8, 5, 2}
	pq.emplace(10); // {10, 8, 5, 2}
	
	cout << pq.top(); // prints 10
	
	pq.pop(); // {8, 5, 2}
	
	cout << pq.top(); // prints 8
	
	// size, swap, empty, function same as others
	
	// Minimum Heap
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5); // {5}
	pq.push(2); // {2, 5}
	pq.push(8); // {2, 5, 8}
	pq.emplace(10); // {2, 5, 8, 10}
	
	cout << pq.top(); // prints 2
	
	// In Minimum heap stores minimum element at top
	
	// In Maximum heap stores maximum element at top
	
	// Inside a Priority Queue a tree data structure is maintained to store the elements
	
	// Time Complexities of operation
	// a) Push -> log n
	// b) Pop -> O(1)
	// c) top -> log n
}
int main(){
	return 0;
}
