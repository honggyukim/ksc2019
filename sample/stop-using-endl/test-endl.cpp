#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = { 10, 20, 30 };
    for (auto a : v)
        std::cout << a << std::endl;
}
