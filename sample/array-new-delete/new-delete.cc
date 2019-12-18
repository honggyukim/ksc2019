class Point {
  char buf[10];
public:
  Point() {}
  ~Point() {}
};

void addr_of_p(void* p) {}

int main()
{
  Point* p1 = new Point;
  addr_of_p(p1);
  delete p1;
}
