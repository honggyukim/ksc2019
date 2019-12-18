#include <iostream>

#define fibnum 8

constexpr int Fibonacci(const int n)
{
	if (n <= 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void)
{
	std::cout << "Fibonacci(" << fibnum << ") = ";
	std::cout << Fibonacci(fibnum);
	std::cout << std::endl;
}
