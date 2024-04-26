#include "easyfind.hpp"

#define VALUE 6

int	main(void) {
	std::set<int>	set;
	std::list<int>	list;
	std::vector<int>	vector;

	for (int i = 0; i < 5; i++) {
		set.insert(i);
		list.push_back(i);
		vector.push_back(i);
	}
	std::cout << "--- testing SET ---" << std::endl;
	try {
		std::set<int>::iterator it = easyfind(set, VALUE);
		std::cout << "Value " << VALUE << " found at position: " << std::distance(set.begin(), it) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n--- testing LIST ---" << std::endl;
		try {
		std::list<int>::iterator it = easyfind(list, VALUE);
		std::cout << "Value " << VALUE << " found at position: " << std::distance(list.begin(), it) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << "\n--- testing VECTOR ---" << std::endl;
	try {
		std::vector<int>::iterator it = easyfind(vector, VALUE);
		std::cout << "Value " << VALUE << " found at position: " << std::distance(vector.begin(), it) << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return (0);
}