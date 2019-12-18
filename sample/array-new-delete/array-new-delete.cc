class Point {
  char buf[10];
public:
  Point() {}
  ~Point() {}
};

void addr_of_p(void* p) {}

int main()
{
  Point* p2 = new Point[3];
  addr_of_p(p2);
  delete[] p2;
}
