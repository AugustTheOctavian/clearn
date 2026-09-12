// print can drive if has license and is an adult

#include <stdio.h>

int main() {
  int age;
  printf("Enter age: ");
  scanf("%d", &age);

  if (age <= 1 || age >= 120) {
    printf("Give a valid age\n");
  } else if (age >= 18) {
    printf("you are an adult and you can drive if you have driving license\n");

  } else {
    printf("you are not an adult\n");
  }
  return 0;
}
