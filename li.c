#include <stdio.h>
int main()

{

  int a[] = {1, 2, 3, 5};
  int length = sizeof(a) / sizeof(a[0]);
  
  printf("%d\n", a[2]);
  // for (int i = 0; i < length; i++)
  // {
  //   printf("%d",a[i]);
  // }
  return 0;
}