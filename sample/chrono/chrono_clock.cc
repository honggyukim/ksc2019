#include <chrono>

int main()
{
	std::chrono::system_clock::now();
	std::chrono::steady_clock::now();
	std::chrono::high_resolution_clock::now();
}
