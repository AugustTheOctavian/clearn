#include <stdio.h>
float add(float a, float b)

{
  float c = a + b;
  return c;
}
int main()
{

  float x, y;
  printf("enter x : \n");
  scanf("%f", &x);

  printf("enter y : \n");
  scanf("%f", &y);


  printf("SUM: %.2f\n", add(x,y));

  

  return 0;
}
