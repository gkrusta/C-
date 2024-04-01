#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <algorithm>
# include <iterator>

class   Span {
	public:
		Span(unsigned int N);
		~Span();
		Span(const Span& other);
		Span& operator=(const Span& other);
		void	addNumber(int elem);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		template<typename Iterator>
		void addRange(Iterator first, Iterator last) {
			while (first != last) {
				addNumber(*first);
				first++;
			}
		}
	private:
		std::vector<int>	_span;
		unsigned int		_capacity;
};

#endif