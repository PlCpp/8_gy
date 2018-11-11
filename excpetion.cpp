#include <iostream>

enum Exceptions {NULL_POINTER_EXCEPTION, ARRAY_INDEX_OUT_OF_BOUNDS_EXCEPTION};

void print(char* a) {
	if (!a) {
		throw NULL_POINTER_EXCEPTION;
	}
}

int main() {
	//throw 10; //futás hiba
	
	try {
		throw 10;
	} catch (int exception) {
		if (exception == 10) {
			std::cout << "Exception 10\n";
		}
	}
	
	try {
		print(0);
	} catch (Exceptions e) {
		std::cout << "NullPointerException\n";
	} finally {
		std::cout << "Always\n";
	}
	
	return 0;
}