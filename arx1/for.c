#include <stdio.h>
int main() {
  int limit;
  char msg[] = "I think i like you";
  printf("Enter limit : \n");

  scanf("%d", &limit);
  for (int i = 0; i <= limit; i++)
    printf("%s\n", msg);
  return 0;
}
