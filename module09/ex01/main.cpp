#include "RPN.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: Pass an expresion for example like this: \"3 5 + 7 2 - *\"" << std::endl;
		return (1);
	}
	if (argc == 2) {
		RPN	Rpn;
		Rpn.CalculateRPN(argv[1]);
	}
	return (0);
}
