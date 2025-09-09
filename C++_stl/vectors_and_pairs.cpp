#include <bits/stdc++.h>
using namespace std;

// ############# PAIRS ###############
void explainPair(){
	pair<int,int> p={1,3};
	cout << p.first << " " << p.second;
	
	pair<int,pair<int,int>> p={1,{3,4}};
	cout << p.first << " " << p.second.second << " " << p.second.first;
	
	pair<int,int> arr[]={{1,2},{2,5},{5,1}};
	cout << arr[1].second;
}

// ############ VECTORS ##############
void explainVector(){
	vector<int> v;
	
	v.push_back(1);
	v.emplace_back(2);
	
	vector<pair<int,int>>vec;
	vec.push_back({1,2});
	v.emplace_back(1,2);
	
	vector<int> v(5,100); // Creates a vector of size of 5 with 100 inserted at each place ({100,100,100,100,100})
	
	vector<int> v(5); // Creates a vector with size 5 with 0's or garbage values
	
	vector<int> v1(5,20); // Creates a vector of size 5 with 20 inserted at each place ({20,20,20,20,20})
	vector<int> v2(v1);  // Creates a copy of v1 and keeps it in vector v2
	
	vector<int>::iterator it=v.begin(); // Elements in vector can be accessed using iterator
	                                    // iterator points to the memory address but not to the element
	it++;
	cout << *(it) << " "; // By using "*" the element inside the memory address can be accessed. It is same as writing " *(v.begin()) "
	
	it=it+2;   // Shifts iterator by 2 position
	cout << *(it) << " ";
	
	vector<int>::iterator it=v.end(); /* v.end() (vector.end()) does not always point to the last element but it points after the last element.
	                                   If "it--" is done then it points to the last element*/
	                                   
	vector<int>::iterator it=v.rend(); /*v.rend() (vector.rend()) points before the starting element of vector*/
	
	vector<int>::iterator it=v.rbegin(); /* v.rbegin() points to the last element of vector. But if it++ is done it increases from last to start.
	                                        It is reverse iterator */
	
	cout << v[0] << " " << v.at(0); // Elements in the vector can be accessed similar to the array
	cout << v.back() << " "; // Prints the last element of the vector
	
	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout << *(it) << " ";
	}
	
	for(auto it=v.begin();it!=v.end();it++){ // By using auto it automatically defines the datatype
		cout << *(it) << " ";
	}
	
	for(auto it:v){ // Using for-each loop
		cout << it << " ";
	}
	
	v.erase(v.begin()+1); /* Suppose if the vector is {10,20,12,23} then vector becomes {10,12,23} */
	
	// {10,20,30,40,50}
	v.erase(v.begin()+2,v.begin()+3); // {10,40,50} ([start,end)). Because end points after the given element
	
	vector<int> v(2,100); //{100,100}
	v.insert(v.begin(),300); //{300,100,100}
	v.insert(v.begin() + 1, 2, 10); //{300, 10, 10, 100, 100} //(locations, no.of occurances, number)
	
	vector<int> copy(2,50); //{50,50}
	v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}
	
	//{10,20}
	cout << v.size(); // 2
	
	//{10,20}
	v.pop_back(); // 10
	
	// v1 -> {10,20}
	// v2 -> {30,40}
	v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20}
	
	v.clear(); // erases entire vector
	
	cout << v.empty(); // Returns a boolean value
	// NOTE: Even after declaring the size of the vector it can be increased
}
int main(){
	
	return 0;
}
