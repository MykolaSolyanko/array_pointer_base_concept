#include <iostream>
#include <cstdint>
#include <cstdio>
int main() {
  int value1 = 40;
  float value2 = 90;

  std::cout << sizeof(float) << std::endl;
  std::cout << "Address value1 is = " << &value1 << " Address value2 is =" << &value2 << std::endl;
  if ((void *)(&value1) < (void *)(&value2)) {
    std::cout << "value1 address < value2 address " << std::endl;
  }

  if ((&value2) == (&value2)) {
     std::cout << "value2 address == value2 address " << std::endl;
  }

  int array[2] {1, 2};
  if (&array[0] < &array[1]) {
    std::cout << "&array[0] <  &array[1]" << std::endl;
  }

  return 0;
}
