#include <iostream>

int square(int x) {
	return x*x;
}

double square(double x) {
	return x*x;
}

int main(void) {

	std::cout << "Print square: " << square(5) << std::endl;
	std::cout << "Print square: " << square(5.5) << std::endl;
	return 0;
}