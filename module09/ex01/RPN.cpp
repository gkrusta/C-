#include "Rpn.hpp"

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
	int	value1 = _stack.back();
	_stack.
	
	if (_stack.size() < 2) {
		std::cerr << "Error" << std::endl;
		exit (1);
	}

}

void	RPN::CalculateRPN(std::string &expression) {
	std::istringstream	iss(expression);
	std::string	token;

	while (iss >> token) {
		if (token.length() == 1 && isdigit(token[0]))
			_stack.push_back(std::atoi(token.c_str()));
		
	}
}