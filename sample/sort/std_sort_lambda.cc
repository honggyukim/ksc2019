#include <algorithm>
using namespace std;

__attribute__((noinline))
void test_std_sort_lambda()
{
        int arr[] = { 4, 1, 3, 2, 5 };
        std::sort(begin(arr), end(arr),
                  [](int a, int b) { return a < b; });
}

int main()
{
        test_std_sort_lambda();
}
