
#include <stdio.h>
int main() {
  // take a number in and check if that's odd or even

  int num;
  printf("take a number in and check if that's odd or even\n");
  printf("Enter number: \n");
  scanf("%d", &num);

  if (num != 0) {

    if (num % 2 == 0) {
      printf("The number is even\n");

    } else {
      printf("The number is odd");
    }
    printf("\n");
  } else {
    printf("you entered 0\n");
  }
  return 0;
}
