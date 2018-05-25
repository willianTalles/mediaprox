#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <numeric>
using std::accumulate;
#include <iterator>
using std::distance;
#include <algorithm>    // 
using std::lower_bound;
using std::upper_bound;
using std::sort;




template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	return lower_bound (first, last, accumulate( first, last, 0)/distance(first, last) );
}

int main() {
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}