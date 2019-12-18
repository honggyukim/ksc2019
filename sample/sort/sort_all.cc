#include <iterator>
#include <algorithm>
using namespace std;

int qcomp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int comp(int a, int b)
{
	return a < b;
}

struct Functor {
	bool operator()(int a, int b) {
		return a < b;
	}
};

__attribute__((noinline))
void test_qsort()
{
        int arr[] = { 8, 4, 1, 10, 3, 7, 2, 5, 9, 6 };
	qsort(arr, 10, sizeof(int), qcomp);
}

__attribute__((noinline))
void test_std_sort()
{
        int arr[] = { 8, 4, 1, 10, 3, 7, 2, 5, 9, 6 };
	sort(begin(arr), end(arr), comp);
}

__attribute__((noinline))
void test_std_sort_functor()
{
        int arr[] = { 8, 4, 1, 10, 3, 7, 2, 5, 9, 6 };
	sort(begin(arr), end(arr), Functor());
}

__attribute__((noinline))
void test_std_sort_lambda()
{
        int arr[] = { 8, 4, 1, 10, 3, 7, 2, 5, 9, 6 };
	sort(begin(arr), end(arr),
		  [](int a, int b) { return a < b; });
}

int main()
{
	test_qsort();
	test_std_sort();
	test_std_sort_functor();
	test_std_sort_lambda();
}
