#include <iterator>
#include <algorithm>
using namespace std;

struct Functor {
        bool operator()(int a, int b) {
                return a < b;
        }
};

__attribute__((noinline))
void test_std_sort_functor()
{
        int arr[] = { 4, 1, 3, 2, 5 };
        std::sort(begin(arr), end(arr), Functor());
}

int main()
{
        test_std_sort_functor();
}
