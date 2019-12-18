all:
	g++ -O2 -std=c++11 -pg -g -o sort_all         sort_all.cc
	g++ -O2 -std=c++11 -pg -g -o qsort            qsort.cc
	g++ -O2 -std=c++11 -pg -g -o std_sort         std_sort.cc
	g++ -O2 -std=c++11 -pg -g -o std_sort_functor std_sort_functor.cc
	g++ -O2 -std=c++11 -pg -g -o std_sort_lambda  std_sort_lambda.cc

clean:
	rm -f gmon.out sort_all qsort std_sort std_sort_functor std_sort_lambda
