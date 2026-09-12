// swap two numbers
#include <stdio.h>
int main() {
  // swap values between two numbers
  int a, b, c;
  printf("This program is to swap values of two numbers input\n");

  printf("Enter a : \n");
  scanf("%d", &a);
  printf("Enter b : \n");
  scanf("%d", &b);

  printf("before swap : \n\ta = %d\n\tb = %d\n", a, b);
  c = a;
  a = b;
  b = c;
  printf("after swap : \n\ta = %d\n\tb = %d\n", a, b);

  return 0;
}
