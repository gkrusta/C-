#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>
# include <stack>

template <typename T>
class   MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		~MutantStack() {};
		MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {};
		MutantStack<T>& operator=(const MutantStack<T>& other) {
			if (this != &other) {
				this->c = other.c;
				return *this;
			}
		}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator	begin() { return this->c.begin(); };
	const_iterator	begin() const { return this->c.begin(); };
	iterator	end() { return this->c.end(); };
	const_iterator end() const { return this->c.end(); };
};

#endif