#include <string>
#include <vector>
#include <deque>
#include <list>

std::vector<std::string> vec;
std::deque<std::string> deq;
std::list<std::string> lis;

void bench_vector_push_back(int iter) {
  std::string s("Hello");
  while (iter--)
    vec.push_back(s);
}

void bench_deque_push_back(int iter) {
  std::string s("Hello");
  while (iter--)
    deq.push_back(s);
}

void bench_list_push_back(int iter) {
  std::string s("Hello");
  while (iter--)
    lis.push_back(s);
}

int main()
{
  int iter = 3000000;
  bench_vector_push_back(iter);
  bench_deque_push_back(iter);
  bench_list_push_back(iter);
}
