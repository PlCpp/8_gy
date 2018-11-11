#include <iostream>
#include "vector.h"

template <class T>
const T& max(const T&a, const T& b) {
	return a < b ? b : a;
}

int main() {
	
	std::cout << max(1, 2) << std::endl;
	std::cout << max(1.5, 1.2) << std::endl;
	//std::cout << max(1, 1.5) << std::endl; //fordítási hiba
	std::cout << max<double>(1, 1.5) << std::endl;
	//std::cout << max("alma", "korte") << std::endl; //fordítási hiba
	std::cout << max("abc", "efg") << std::endl;
	
	Vector<int> v(10);
	Vector<int, 20> v2;
	return 0;
}