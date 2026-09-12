// adding two numbers userinput

#include <stdio.h>
int main() {
  float a, b;
  printf(
      "This program will prompt you for two numbers and give you their sum\n");
  printf("Enter #1 : \n");
  scanf("%f", &a);
  printf("Enter #2 : \n");
  scanf("%f", &b);

  printf("%.3f + %.3f = %.3f\n", a, b, a + b);
  return 0;
}
