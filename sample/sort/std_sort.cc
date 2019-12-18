#include <algorithm>
using namespace std;

int comp(int a, int b)
{
        return a < b;
}

__attribute__((noinline))
void test_std_sort()
{
        int arr[] = { 4, 1, 3, 2, 5 };
        std::sort(begin(arr), end(arr), comp);
}

int main()
{
        test_std_sort();
}
