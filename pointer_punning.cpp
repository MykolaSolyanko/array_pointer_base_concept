#include <iostream>

struct Entry
{
  int x, y;
};

int main(int argc, char const *argv[]) {
  Entry e {5, 6};

  int *point = (int *)&e;

  std::cout << point[0] << ", "<< point[1] << std::endl;

  int y = *(int *)((char *)&e + 4);
  std::cout << y << std::endl;
  return 0;
}
