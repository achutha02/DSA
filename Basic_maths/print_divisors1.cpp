#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ls;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            ls.push_back(i);
            if((n / i) != i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
    return 0;
}

/*
ls is a vector<int>.

The loop goes through each element of ls one by one.

auto it : ls means:

auto automatically deduces the type of the elements in ls.

Since ls is a vector<int>, each element is an int.

So effectively it becomes:

for (int it : ls)


Inside the loop, it is just a copy of each element of ls.





IMPORTANT NOTE: 

If you want to modify elements of ls inside the loop, you should use a reference:

for (auto &it : ls) {
    it *= 2;  // doubles each element in ls
}


Otherwise, it is just a copy, and the original ls remains unchanged.
 */

