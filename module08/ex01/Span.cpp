#include "Span.hpp"

Span::Span(unsigned int N) : _capacity(N) {
    _span.reserve(N);
}

Span::~Span() {
}

Span::Span(const Span& other) {
    _capacity = other._capacity;
    _span = other._span;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _capacity = other._capacity;
        _span.clear();
        _span = other._span;
    }
    return (*this);
}

void    Span::addNumber(int elem) {
    if (_span.size() == _capacity)
        throw std::overflow_error("Maximum capacity is reached!");
    _span.push_back(elem);
}

unsigned int	Span::shortestSpan() {
    if (_span.size() < 2)
        throw std::logic_error("Not enough elements in Span!");

    std::vector<int> spanCopy;
    spanCopy = _span;
    std::sort(spanCopy.begin(), spanCopy.end());
    int minDifference = spanCopy[1] - spanCopy[0];
    for (size_t i = 1; i < spanCopy.size() - 1; i++) {
        int difference = spanCopy[i + 1] - spanCopy[i];
        if (difference < minDifference)
            minDifference = difference;
    }
    return (minDifference);
}

unsigned int	Span::longestSpan() {
    if (_span.size() < 2)
        throw std::logic_error("Not enough elements in Span!");

    std::vector<int> spanCopy;
    spanCopy = _span;
    std::sort(spanCopy.begin(), spanCopy.end());

    return (spanCopy.back() - spanCopy.front());
}
