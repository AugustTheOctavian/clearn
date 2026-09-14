// arithe

#include <stdio.h>
#include <math.h>

int main() {
  int a, b, add, sub, mul, div, reminder;

  a = 87;
  b = 2;

  add = a + b;
  sub = a - b;
  mul = a * b;
  div = a / b;
  reminder = a % b;

  printf("a + b = %d\n", add);
  printf("a ^ b = %d\n",pow(a,b));
  printf("a - b = %d\n", sub);
  printf("a * b = %d\n", mul);
  printf("a / b = %d\n", div);
  printf("a reminder b = %d\n", reminder);

  return 0;
}
