#include <iostream>

int main()
{
  // обьявляем массив с четырех элементов
  int array[4] = {1,2,3,4};
  // доступ к элементу который находиться перед первым элементом массива
  // int undefined_value = array[-1];

  // доступ к элементу который находиться после последнего элемента массива [0..3]
  // int undefined_last_value = array[4];
  // считать с памяти значение которое находиться во втором элементе массива
  int arr_first_elem = array[1];
  std::cout << "First element array = " << arr_first_elem << std::endl;

  // записать значение 25 в третий элемент массива {1,2,25,4}
  std::cout << "Third element array = " << array[2] << std::endl;
  array[2] = 25;

  std::cout << "Third after write element array = " << array[2] << std::endl;

  // ошибка компиляции, что неверный тип для индекса массива (double) 
  // int value_array = array[1.35];

  // происходит явное преоразование вещественного в целое
  int value_array = array[(int)1.35];

  std::cout << "Second element array = " << value_array << std::endl;
  // обьявляем константный целочисленный массив
  const int read_only_array[2] = {1, 2};

  // прочитать значение которое находится во втором элементе массива
  int const_value = read_only_array[1];
  std::cout << "Second element read only array = " << value_array << std::endl;
  // ошибка компиляции, при записи в read only элемент
  // read_only_array[1] = 3;

  char index = 1;
  int value = read_only_array[index - 1]; // получение первого элемента массива {1}
  return 0;
}
