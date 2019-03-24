#include <iostream>

int main(void) {
  int value = 20;
  int * const cptr = &value; // константный указатель целочисленное значение
  // int * const cptr_er; // compiler error, константный указатель должен быть проинициализирован при обьявлении
  std::cout << "Address value is " << &value << " address where is pointers " <<  cptr << "\n";
  std::cout << "Value is " << value << " value where pointers cptr " <<  *cptr << "\n";
  *cptr = 40;
  std::cout << "Value is " << value << " value where pointers cptr " <<  *cptr << "\n";
  int value1 = 25;
  // cptr = &value1; // compilation error, адресс на который указывает указатель не должен изменяться 
  *cptr = value1;
  const int *cptr1 = &value1;
  std::cout << "Value is " << value1 << " value where pointers cptr1 " <<  *cptr1 << "\n";
  // *cptr1 = value; // ошибка компиляции, значение на которое указывает указатель есть read-only
  value1 = 40; // но мы может менять оригинальное значение
  std::cout << "Value is " << value1 << " value where pointers cptr1 " <<  *cptr1 << "\n";
  cptr1 = &value; // но сам указатель менять можно, т.е адресс на который он указывает

  const int value2 = 2;
  // ошибка компиляции, т.к. несовместимость типов, указатель указывающий не на const нельзя инициализировать const переменной
  // int *const cptr2 = &value2;
  const int * const cptr3 = &value2;
  // cptr3 = &value1; // compilation error, assignment of read-only variable ‘cptr3’
  // *cptr3 = 55; // compilation error, assignment of read-only location ‘*(const int*)cptr3’
  std::cout << "Value is " << value2 << " value where pointers cptr3 " <<  *cptr3 << "\n";
  return 0;
}