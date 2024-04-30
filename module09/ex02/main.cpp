#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	if (argc < 3) {
		std::cerr << "Error: Pass an expresion for example like this: 3 5 9 7 4" << std::endl;
		return (1);
	}
	PmergeMe	stack(argc, argv);
	stack.FordJohnsonMergeSort();
	return (0);
}