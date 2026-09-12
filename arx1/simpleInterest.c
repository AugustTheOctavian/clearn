
#include <stdio.h>
int main() {
  // input smth here

  printf("This program will calculate simple interest :)\n");
  float rate, principal, SI, interest, A, n;
  printf("Enter interest rate(percent) : \n");
  scanf("%f", &rate);
  printf("Enter principal : \n");
  scanf("%f", &principal);
  printf("Enter no of years : \n");
  scanf("%f", &n);

  rate = rate / 100;
  A = principal * (1 + (rate * n)); // amount
  SI = principal * rate;            // interest per year
  interest = principal * rate * n;  // interest for total period

  printf("-----------------------------------\n");
  printf("Interest per year: %.3f\n", SI);
  printf("Total interest  : %.3f\n", interest);

  printf("Amount : %.3f\n", A);

  return 0;
}
