#include <stdio.h>

struct array
{
  int a;
  int b;
  int c;
};

//For global pointer
static int *ptr;
void array_memory() {
  int array[4] = {1,2,3,4};
  ptr = array;
}

void array_memory_test() {
   printf("First %d\n", (ptr[0] +  ptr[1] +  ptr[2] +  ptr[3]));
}

//For static array
/*void array_memory() {
  int array[5] = {1,2,3,4,5};
}

void array_memory_test() {
  int array[5];
  printf("First %d\n", array[0]);
  printf("Second %d\n", array[1]);
  printf("Third %d\n", array[2]);
  printf("Fourth %d\n", array[3]);
  printf("Fourth %d\n", array[4]);
}*/

//Use struct more common use case
/*void array_memory() {
  array ar = {1,2,3};
}

void array_memory_test() {
  array ar;
  printf("a %d, b %d, c %d \n", ar.a, ar.b, ar.c);
}*/

int main(void) {
  array_memory();
  array_memory_test();
  return 0;
}