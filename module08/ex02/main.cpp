#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "--- testing MutantStack ---" << std::endl;
		MutantStack<int> mstack;
		std::cout << "adding {1, 3, 5} to the stack..." << std::endl;
		mstack.push(1);
		mstack.push(3);
		mstack.push(5);
		std::cout << "size: " << mstack.size() << std::endl << "mstack.top() -> "<< mstack.top() << std::endl;
		std::cout << "removing last added element with mstack.pop()... " << std::endl;
		mstack.pop();
		std::cout << "size: " << mstack.size() << std::endl;

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		std::cout << "iterating over the stack..." << std::endl;
		while (it != ite) {
			std::cout << *it << "  ";
			++it;
		}

		std::cout << "\n\n--- copying MutantStack ---" << std::endl;
		std::stack<int> s(mstack);
		std::cout << "stack conetnt (in reverse order):" << std::endl;
		while (!s.empty()) {
			int	elem = s.top();
			s.pop();
			std::cout << elem << "  ";
		}
	}	
	{	
		std::cout << "\n\n--- replacing the MutantStack with a std::list ---" << std::endl;
		std::list<int>	myList;
		std::cout << "adding {1, 3, 5} to the list..." << std::endl;
		myList.push_back(1);
		myList.push_back(3);
		myList.push_back(5);
		std::cout << "size: " << myList.size() << std::endl << "myList.back() -> "<< myList.back() << std::endl;
		std::cout << "removing last added element with myList.pop_back()... " << std::endl;
		myList.pop_back();
		std::cout << "size: " << myList.size() << std::endl;

		std::list<int>::iterator it = myList.begin();
		std::list<int>::iterator ite = myList.end();

		++it;
		--it;
		std::cout << "iterating over the list..." << std::endl;
		while (it != ite) {
			std::cout << *it << "  ";
			++it;
		}
	}
	return 0;
}