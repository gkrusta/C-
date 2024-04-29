#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <list>
# include <vector>
# include <ctime>
# include <algorithm>

class	PmergeMe {
	public:
		PmergeMe(int argc, char **argv);
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);
		std::list<int>	FordJohnsonSwap(std::list<int> &left, std::list<int> &right);
		std::list<int>	MergeAndSort(std::list<int> &lst);
		void	FordJohnsonMergeSort();
		std::list<int>	getList();
		void	setList(std::list<int> stack);
	private:
		std::vector<int> _vec;
		std::list<int> _lst;
};

#endif