all:
	g++ -std=c++11 -pg -g -O2 -o new-delete new-delete.cc
	g++ -std=c++11 -pg -g -O2 -o unique_ptr unique_ptr.cc
	g++ -std=c++11 -pg -g -O0 -o no-opt-unique_ptr unique_ptr.cc

clean:
	rm -f gmon.out new-delete unique_ptr no-opt-unique_ptr
