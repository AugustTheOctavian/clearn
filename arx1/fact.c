#include <stdio.h>
unsigned int factorial(unsigned int N) {
  int fact = 1, i;

  for (i = 1; i <= N; i++) {
    fact *= i;
  }
  return fact;
}
int main() {

  int n;
  int fact = factorial(n);
  printf("enter N : \n");
  scanf("%d", &n);

  printf("factorial of %d is %d: \n", n, fact);

  return 0;
}
