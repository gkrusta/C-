#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int argc, char **argv) {
	for (int i = 1; i < argc; ++i) {
		if (std::atoi(argv[i]) < 0) {
			std::cerr << "Error" << std::endl;
			exit (1);
		}
		_vec.push_back(std::atoi(argv[i]));
		_lst.push_back(std::atoi(argv[i]));
	}
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

std::list<int>	PmergeMe::FordJohnsonSwapList(std::list<int> &left, std::list<int> &right) {
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

std::list<int>	PmergeMe::MergeAndSortList(std::list<int> &lst) {
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

	left = MergeAndSortList(left);
	right = MergeAndSortList(right);

	return (FordJohnsonSwapList(left, right));
}

std::vector<int>	PmergeMe::FordJohnsonSwapVector(std::vector<int> &left, std::vector<int> &right) {
	std::vector<int>	result;
	std::vector<int>::iterator	it_l= left.begin();
	std::vector<int>::iterator	it_r = right.begin();

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

std::vector<int>	PmergeMe::MergeAndSortVector(std::vector<int> &vec) {
	std::vector<int> left, right;
	std::vector<int>::iterator it = vec.begin();
	size_t middle = vec.size() / 2;

	if (vec.size() <= 1)
		return (vec);

	for (size_t i = 0; i < middle; it++, i++) {
		left.push_back(*it);
	}
	for (; it != vec.end(); it++) {
		right.push_back(*it);
	}

	left = MergeAndSortVector(left);
	right = MergeAndSortVector(right);

	return (FordJohnsonSwapVector(left, right));
}

void	PmergeMe::FordJohnsonMergeSort() {
	std::list<int>::iterator it = _lst.begin();
	std::cout << "Before:   ";
	for (int i = 0; i < 5 && it != _lst.end(); i++, it++)
		std::cout << *it << " ";
	if (it != _lst.end())
		std::cout << "[...]";

	std::clock_t start_l = std::clock();
	_lst = MergeAndSortList(_lst);
	std::clock_t end_l = std::clock();

	std::clock_t start_v = std::clock();
	_vec = MergeAndSortVector(_vec);
	std::clock_t end_v = std::clock();

	std::cout << std::endl << "After:   ";
	it = _lst.begin();
	for (int i = 0; i < 5 && it != _lst.end(); i++, it++)
		std::cout << *it << " ";
	if (it != _lst.end())
		std::cout << "[...]";

	double time_lst = 1000000.0 * (end_l - start_l) / CLOCKS_PER_SEC;
	double time_vec = 1000000.0 * (end_v - start_v) / CLOCKS_PER_SEC;

	std::cout << std::endl << "Time to process a range of " << _lst.size() << " elements with std::list : " << time_lst << " us" << std::endl;
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << time_vec << " us" << std::endl;
}
