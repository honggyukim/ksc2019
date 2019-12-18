#include <iostream>

#define fibnum 8

template <unsigned N>
struct Fibonacci {
	enum { value = Fibonacci<N-1>::value + Fibonacci<N-2>::value };
};

template <> struct Fibonacci<1> {
	enum { value = 1 };
};

template <> struct Fibonacci<0> {
	enum { value = 0 };
};

int main(void)
{
	std::cout << "Fibonacci(" << fibnum << ") = ";
	std::cout << Fibonacci<fibnum>::value;
	std::cout << std::endl;
}
