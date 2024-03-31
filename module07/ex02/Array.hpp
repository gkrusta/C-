#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array& other);
		Array&	operator=(const Array& other);
		T&	operator[](unsigned int index);
		unsigned int	size() const;

		class	OutOfRange: public std::exception
		{
			virtual const char* what() const throw()
			{
				return "Out of range";
			}
		};
	private:
		T*	_array;
		unsigned int	_arraySize;
};

template<typename T>
Array<T>::Array() {
	_array = NULL;
	_arraySize = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) : _arraySize(n){
	_array = new T[n];
}

template<typename T>
Array<T>::~Array() {
	if (_array)
		delete[] _array;
}

template<typename T>
Array<T>::Array(const Array& other) {
		_array = new T[other._arraySize];
		_arraySize = other._arraySize;
		for (unsigned int i = 0; i < _arraySize; i++) {
			_array[i] = other._array[i];
		}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != other) {
		delete[] _array;
		_array = new T[other._arraySize];
		_arraySize = other._arraySize;
		for (unsigned int i = 0; i < _arraySize; i++) {
			_array[i] = other._array[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _arraySize)
		throw OutOfRange();
	return _array[index];
}

template<typename T>
unsigned int	Array<T>::size() const{
	return _arraySize;
}

#endif