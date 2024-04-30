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
		std::list<int>	FordJohnsonSwapList(std::list<int> &left, std::list<int> &right);
		std::list<int>	MergeAndSortList(std::list<int> &lst);
		std::vector<int>	FordJohnsonSwapVector(std::vector<int> &left, std::vector<int> &right);
		std::vector<int>	MergeAndSortVector(std::vector<int> &vec);
		void	FordJohnsonMergeSort();
		std::list<int>	getList();
		void	setList(std::list<int> stack);

	private:
		std::vector<int> _vec;
		std::list<int> _lst;
};

#endif