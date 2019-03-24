#include <cstdio>

#define SIZE_ARRAY(array) sizeof((array)) / sizeof((array)[0]);

struct Array {
  int array[3] = {1,2,3};
};

void using_another_way_assign_array() {
  Array ar1;
  ar1.array[0] = 10;
  ar1.array[1] = 20;
  ar1.array[2] = 30;
  Array ar2 = ar1;

  for (auto value: ar2.array) {
    printf("%d ", value); // print 10 20 30
  }
  printf("\n");
}

void loop_array() {
  int first_array[3] = {1,2,3};
  int second_array[3] = {4,5,6};
  size_t count_array_first = SIZE_ARRAY(first_array);
  size_t count_array_second = SIZE_ARRAY(second_array);

  if (count_array_first <= count_array_second) {
    for (size_t i = 0; i < count_array_first; ++i) {
      first_array[i] = second_array[i];
    }
  } else {
    printf("Second array size is smaller than size first array\n");
  }

  for (size_t i = 0; i < count_array_first; ++i) {
    printf("%d ", first_array[i]);
  }
  printf("\n");
  // Массивы  first_array и second_array теперь одинаковы
}

int main() {
  int first_array[3] = {1,2,3};
  int second_array[3] = {4,5,6};
 
  // first_array = second_array; // compilation error

  // first_array = {4,5,6}; // compilation errorw
  // first_array = (int [3]){4,5,6}; // compilation error

  int value = 10;
  // first_array = value; // compilation error, несовместимые типы int и int[3]
  first_array[1] = value; // compile ok

  loop_array();
  using_another_way_assign_array();
  return 0;
}
