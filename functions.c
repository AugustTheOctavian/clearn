// add function with float number formatting to desired decimal places

#include <stdio.h>
float add(float a, float b)
{

  return a + b;
}
int main()
{
  float a, b;
  printf("Enter a : \n");
  scanf("%f", &a);
  printf("Enter b : \n");
  scanf("%f", &b);
  for (int i = 0; i <= 20; i++)
  {
    printf("*");
  };
  printf("\n");
  printf("A + B : %.2f\n", add(a, b));
  return 0;
}




































