all: subdirs
	gcc -pg -g -o foobar foobar.c
	gcc -pg -g -o hello hello.c
	g++ -pg -g -o hello-cpp hello.cpp
	g++ -pg -g -std=c11 -o constexpr-fib constexpr-fib.cc
	g++ -pg -g -std=c11 -o tmpfib tmpfib.cc
	g++ -pg -g -std=c11 -o bench bench.cpp
	g++ -O2 -std=c++11 -pg -g -o sort_all sort/sort_all.cc

subdirs:
	$(MAKE) -C array-new-delete
	$(MAKE) -C chrono
	$(MAKE) -C sort
	$(MAKE) -C stop-using-endl
	$(MAKE) -C unique_ptr

clean:
	$(MAKE) -C array-new-delete clean
	$(MAKE) -C chrono clean
	$(MAKE) -C sort clean
	$(MAKE) -C stop-using-endl clean
	$(MAKE) -C unique_ptr clean
	rm -f foobar hello hello-cpp constexpr-fib tmpfib bench sort_all
