#include "RPN.hpp"

RPN::RPN() {
}

RPN::~RPN() {
}

RPN::RPN(const RPN& other) : _stack(other._stack) {
}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other) {
		_stack = other._stack;
	}
	return *this;
}

void	RPN::ApplyOperation(char operation) {
	if (_stack.size() < 2) {
		std::cerr << "Error" << std::endl;
		exit (1);
	}

	int	val1 = _stack.back();
	_stack.pop_back();
	int	val2 = _stack.back();
	_stack.pop_back();

	switch (operation) {
		case '+': _stack.push_back(val2 + val1); break;
		case '-': _stack.push_back(val2 - val1); break;
		case '*': _stack.push_back(val2 * val1); break;
		case '/':
			if (val1 == 0) {
				std::cerr << "Error" << std::endl;
				exit (1);
			}
			_stack.push_back(val2 / val1);
			break;
		default:
			std::cerr << "Error" << std::endl;
			exit (1);
	}
}

void	RPN::CalculateRPN(const std::string &expression) {
	std::istringstream	iss(expression);
	std::string	token;

	while (iss >> token) {
		if (token.length() != 1) {
			std::cerr << "Error" << std::endl;
			exit (1);
		}
		else if (isdigit(token[0]))
			_stack.push_back(std::atoi(token.c_str()));
		else
			ApplyOperation(token[0]);
	}
	if (_stack.size() != 1) {
		std::cerr << "Error" << std::endl;
		exit (1);
	}

	int	result = _stack.back();
	std::cout << result << std::endl;
}