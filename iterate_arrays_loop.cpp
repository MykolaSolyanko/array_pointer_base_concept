#include <cstdio>

void for_loop() {
  int array[3] = {1,2,3};
  // в этом цыкле мы проходимся по массиву array для этого исользуем целочисленный сячетчик i
  // в начале цикла мы инициализируем счетчик 0, и после каждой итерации проверяем не вышли ли мы за границу массива, если нет то
  // увеличчиваем счетчик на 1
  for (size_t i = 0; i < 3; ++i) {
    printf("%d \n", array[i]);
  }

  // с с++11 появился новый вид Range-based for loop
  for (auto value: array) {
    printf("%d \n", value);
  }
}

void while_loop() {
  int array[3] = {1,2,3};
  // в этом цыкле мы проходимся по массиву array для этого исользуем целочисленный сячетчик i
  // вначале мы инициализируем счетчик 0, в цыкле мы проверяем не вышли ли мы за границы массива, если нет то печатаем значение
  // элемента и увеличиваем счетчик 
  size_t i = 0;
  while (i < 3) {
    printf("%d \n", array[i++]);
  }
}

void loop_string() {
  char str[] = "abcd";
  size_t i = 0;
  while (str[i]) {
    printf("%c", str[i++]);
  }

  printf("\n");
  for (i = 0; str[i]; ++i) {
    printf("%c", str[i]);
  }
  printf("\n");
}

int main() {
  for_loop();
  while_loop();
  loop_string();
  return 0;
}
