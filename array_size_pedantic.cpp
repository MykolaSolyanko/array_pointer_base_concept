#include <cstdint>

int main() {
  // тип элементов идентификатор[размер массива];
  // примеры
  int array[2];
  float array1[3];

  const uint32_t count_element = 5;
  int array2[count_element];

  // не компилируется, т.к. при обьявлении константы в C/C++ ее необходимо инициализировать
  // const int array3[3];

  // не компилируется
  /* const float array_size = 10.5;
   int array_error[array_size];
  */

  // double array4[];

  // компилируеться ок, без флага -pedantic
  uint8_t size_runtime = 40;
  uint32_t array3[size_runtime];
  return 0;
}
