#include <stdio.h>

int main(void) {
  int array[2][2]; // обьявление двумерного массива(содержит неопределенное значение)
  int array1[3][3] = {1,2,3,4,5,6,7,8,9}; // обьявление и инициализация двумерного массива
  int array2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // другой вид инициализации масиива
  // int array1D[3] = array1[1]; //ошибка компиляции инициализация массива возможна только списком инициализации
  int array3D[3][3][3] = {
                          {{1,2,3}, {4,5,6}, {7,8,9}},
                          {{10,11,12}, {13,14,15}, {16,17,18}},
                          {{19,20,21}, {22,23,24}, {25,26,27}}
                         }; // инициализация двумерного массива

  int array2D[][3] = {{1,2,3}, {1,2,3}, {1,2,3}};

  // ошибка компиляции, можно опускать указание размера первого уровня, но не всех остальных
  // int array2D_error[][] = {{1,2,3}, {1,2,3}, {1,2,3}};

  int value = array1[1][1]; // доступ ко второму элементу первого уровня, и второго элемента второго уровня
  printf("Midle element array1 is %d\n", value); // print 5

  value = array3D[0][1][2];
  printf("Midle element array3D is %d\n", value); // print 6

  array2[2][2] = 100;

  printf("======= 2D Array =======\n");
  printf("\tColumn 1 \t Column 2 \t Column 3\n");
  for (size_t i = 0; i < 3; ++i) {
    printf("Row %zu\t", i + 1);
    for (size_t j = 0; j < 3; ++j) {
      printf("%5d\t\t", array2[i][j]);
    }
    printf("\n");
  }
  // представление многомерного массива одномерным массивом
  int array1D[3 * 3];
  size_t counter = 0;
  for (size_t i = 0; i < 3; ++i) {
    for(size_t j = 0; j < 3; ++j) {
      array1D[i * 3 + j] = ++counter;
    }
  }
  printf("====2D array via 1D array====\n"); 
  for (size_t i = 0; i < 3; ++i) {
    for(size_t j = 0; j < 3; ++j) {
      printf("%2d\t", array1D[i * 3 + j]);
    }
    printf("\n");
  }


  return 0;
}