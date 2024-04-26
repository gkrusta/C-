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
		int	CalculateRPN(std::string &expression);

	private:
		std::deque<int> _stack;
};

#endif