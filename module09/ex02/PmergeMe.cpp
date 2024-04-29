#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
	for (int i = 1; i < argc; ++i) {
		_vec.push_back(std::atoi(argv[i]));
		_lst.push_back(std::atoi(argv[i]));
	}
	FordJohnsonMergeSort();
}

PmergeMe::~PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe& other) : _vec(other._vec), _lst(other._lst) {
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		_vec = other._vec;
		_lst = other._lst;
	}
	return *this;
}

std::list<int>	PmergeMe::getList() {
	return (_lst);
}

void	PmergeMe::setList(std::list<int> stack) {
	_lst = stack;
}

std::list<int>	PmergeMe::FordJohnsonSwap(std::list<int> &left, std::list<int> &right) {
	std::list<int>	result;
	std::list<int>::iterator	it_l= left.begin();
	std::list<int>::iterator	it_r = right.begin();

	while (it_l != left.end() && it_r != right.end()) {
		if (*it_l < *it_r) {
			result.push_back(*it_l);
			it_l++;
		} else {
			result.push_back(*it_r);
			it_r++;
		}
	}

	result.insert(result.end(), it_l, left.end());
	result.insert(result.end(), it_r, right.end());

	return (result);
}

std::list<int>	PmergeMe::MergeAndSort(std::list<int> &lst) {
	std::list<int> left, right;
	std::list<int>::iterator it = lst.begin();
	size_t middle = lst.size() / 2;

	if (lst.size() <= 1)
		return (lst);

	for (size_t i = 0; i < middle; it++, i++) {
		left.push_back(*it);
	}
	for (; it != lst.end(); it++) {
		right.push_back(*it);
	}

	left = MergeAndSort(left);
	right = MergeAndSort(right);

	return (FordJohnsonSwap(left, right));
}

void	PmergeMe::FordJohnsonMergeSort() {
	std::list<int>::iterator it = _lst.begin();

	std::cout << "Before:   ";
	for (int i = 0; i < 5; i++, it++)
		std::cout << *it << " ";
	if (*it)
		std::cout << "[...]";

	std::clock_t start = std::clock();
	_lst = MergeAndSort(_lst);
	std::clock_t end = std::clock();

	std::cout << std::endl << "After:   ";
	it = _lst.begin();
	for (int i = 0; i < 5; i++, it++)
		std::cout << *it << " ";
	double elapsed = 1000000.0 * (end - start) / CLOCKS_PER_SEC;
	std::cout << std::endl << "Time to process a range of " << _lst.size() << " elements with std::list: " << elapsed << " us" << std::endl;

}
