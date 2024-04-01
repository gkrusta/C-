#include "Span.hpp"

int main() {
	std::cout << "--- Span of 5 elements ---" << std::endl;
	std::srand(std::time(NULL));
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n--- Span of 10000 elements ---" << std::endl;
	Span sp2 = Span(10000);
	std::vector<int> vec;
	
	for (size_t i = 0; i < 10000; i++) {
		vec.push_back(rand() % 10000);
	}
	sp2.addRange(vec.begin(), vec.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	std::cout << "\n--- Trying to add more elements ---" << std::endl;
	try {
		sp2.addNumber(1);
	} catch (std::exception &e){
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}