#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <deque>
# include <cstdlib>
# include <stdexcept>

class	RPN {
	public:
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		void	CalculateRPN(const std::string &expression);
		void	ApplyOperation(char operation);

	private:
		std::deque<int> _stack;
};

#endif