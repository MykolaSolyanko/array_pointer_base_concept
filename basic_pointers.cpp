#include <iostream>

int main(void) {
  int value = 10;
  int *ptr;
  // покажем что каждая переменная имеет свой адресс
  std::cout << "Address value is" << &value << " address ptr is " <<  &ptr << "\n";
  std::cout << "Address where is ptr poineters " <<  ptr << "\n"; // сдесь мы получим муссор
  ptr = 0;
  std::cout << "Address where is ptr poineters " <<  ptr << "\n"; // теперь получим ноль
  ptr = &value; // присвоим указателю адресс пременной
  std::cout << "Address where is ptr poineters " <<  ptr << "\n"; // теперь указатель содержит адресс переменной value
  std::cout << "Address value is " << &value << " address ptr is " <<  &ptr << "\n"; // но адресса переменных все также разнные  
  std::cout << "Value is " << value << " Poinert to address " << ptr << " has the next value " << *ptr << "\n";
  *ptr = 55; // меняе значение которое расположено в переменной value
  // value тоже изменилось
  std::cout << "Value is " << value << " Poinert to address " << ptr << " has the next value " << *ptr << "\n";

  // Работа с не типизированным указателем
  void *ptr_void = nullptr;
  int int_value = 20;

  ptr_void = &int_value;
  std::cout << "Address value is " << &int_value << " address where is pointers " <<  ptr_void << "\n";
  // получим ошибку компиляции т.к. нетипизированный указатель необходимо приводит к типу при получении данных
  // std::cout << "Value " << int_value << " Pointers value " <<  *ptr_void << "\n";
  std::cout << "Value " << int_value << " Pointers value " <<  *((int *)ptr_void) << "\n"; // compile ok, явное приведение типов
  double double_value = 10.4;
  ptr_void = &double_value;
  std::cout << "Address value is " << &double_value << " address where is pointers " <<  ptr_void << "\n";
  std::cout << "Value " << int_value << " Pointers value " <<  *((double *)ptr_void) << "\n"; // compile ok, явное приведение типов
  return 0;
}