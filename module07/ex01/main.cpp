#include "iter.hpp"

int	main( void ) {
	std::cout << "--- INT ARRAY ---" << std::endl;
	int arrInt[] = {0, 4, -10, 6};

	std::cout << "Before iter(): " << std::endl;
	for (size_t i = 0; i < sizeof(arrInt) / sizeof(arrInt[0]); i++) {
		std::cout << arrInt[i] << "  ";
	}
	iter<int>(arrInt, sizeof(arrInt) / sizeof(arrInt[0]), substractOne<int>);
	std::cout << "\nsubstractOne()...\n After iter(): " << std::endl;
	for (size_t i = 0; i < sizeof(arrInt) / sizeof(arrInt[0]); i++) {
		std::cout << arrInt[i] << "  ";
	}

	std::cout << "\n\n--- CHAR ARRAY ---" << std::endl;
	char arrChar[] = {'a', 'B', 'z', '1'};

	std::cout << "Before iter(): " << std::endl;
	for (size_t i = 0; i < sizeof(arrChar) / sizeof(arrChar[0]); i++) {
		std::cout << arrChar[i] << "  ";
	}
	iter<char>(arrChar, sizeof(arrChar) / sizeof(arrChar[0]), addOne<char>);
	std::cout << "\naddOne()...\nAfter iter(): " << std::endl;
	for (size_t i = 0; i < sizeof(arrChar) / sizeof(arrChar[0]); i++) {
		std::cout << arrChar[i] << "  ";
	}

	return 0;
}