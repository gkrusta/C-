#include "Array.hpp"

void	testEmptyArray() {
	std::cout << "--- Empty ARRAY ---" << std::endl;
	Array<int>	arr;
	std::cout << "size: " << arr.size() << std::endl;
}

void	testIntArray(unsigned int n) {
	std::cout << "\n--- Int ARRAY ---" << std::endl;
	Array<int>	arr(n);

	std::cout << "size: " << arr.size() << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << "  ";
	}
}

void	testCreateArray() {
	std::cout << "\n\n--- Filled Int ARRAY ---" << std::endl;
	Array<int>	arr(3);

	arr[0] = 1;
	arr[1] = 3;
	arr[2] = -5;
	std::cout << "size: " << arr.size() << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << "  ";
	}
}

void	testCopyConstructor() {
	std::cout << "\n\n--- COPY CONSTRCTOR ---" << std::endl;
	Array<int>	arr(2);

	arr[0] = 1;
	arr[1] = 3;
	std::cout << "array1: ";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << "  ";
	}
	std::cout << std::endl;

	Array<int>	arr2(arr);
	std::cout << "array2: " << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr2[i] << "  ";
	}
	std::cout << "\nChanging array1: array1[0] = 5" << std::endl;
	arr[0] = 5;
	std::cout << "array1[0]: " << arr[0] << std::endl;
	std::cout << "array2[0]: " << arr2[0] << std::endl;
}

void	testCopyAssignation() {
	std::cout << "\n--- COPY CONSTRCTOR ASSIGNATION ---" << std::endl;
	Array<char>	arr(2);

	arr[0] = 'a';
	arr[1] = 'b';
	std::cout << "array1: ";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << "  ";
	}

	Array<char>	arr2 = arr;
	std::cout << std::endl << "array2: ";
	for (unsigned int i = 0; i < arr.size(); i++) {
		std::cout << arr2[i] << "  ";
	}
	std::cout << "\nChanging array1: array1[0] = 'z'" << std::endl;
	arr[0] = 'z';
	std::cout << "array1[0]: " << arr[0] << std::endl;
	std::cout << "array2[0]: " << arr2[0] << std::endl;
}
int	main(void) {
	testEmptyArray();
	testIntArray(3);
	testCreateArray();
	testCopyConstructor();
	testCopyAssignation();
	return 0;
}