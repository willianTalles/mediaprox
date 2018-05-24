#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <numeric>
using std::accumulate;


template<typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	int soma = accumulate( first, last, 0);
	int cont = 0;
	vector<int> diferencas;


	soma = soma/cont;

	cont = 0;
	for (auto i = first; i != last; ++i){
		diferencas.push_back( ( ( (*i) - soma ) < 0 ) ? ((*i) - soma) * (-1) :  ((*i) - soma) );
		// cout << diferencas[cont] << " ";
	}



	cout << soma << endl;

	return first;
}

int main() {
	vector<int> v { 1, 2, 3, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}