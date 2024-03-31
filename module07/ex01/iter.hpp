
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

// T - type of elements in the array
// Func - the type of the function object
template<typename T, typename Func>
void	iter(T* array, size_t len, Func f) {
	for (size_t i = 0; i < len; i++) {
		f(array[i]);
	}
}

template<typename T>
void	addOne(T& elem) {
	elem += 1;
}

template<typename T>
void	substractOne(T& elem) {
	elem -= 1;
}

#endif