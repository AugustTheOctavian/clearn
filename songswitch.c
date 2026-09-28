// a program that prints out the number of song chosen with user input.

// use case: a sample or an exercise using switch statement
#include <stdio.h>
int main(void)
{

  int song_choice;
  printf("Enter your song choice: \n");
  scanf("%d", &song_choice);

  switch (song_choice)
  {
  case 1:
    printf("you chose song 1\n");
    break;
  case 2:
    printf("you chose song 2\n");
    break;
  case 3:
    printf("you chose song 3\n");
    break;
  case 4:
    printf("you chose song 4\n");
    break;
  case 5:
    printf("you chose song 5\n");
    break;

  default:
    printf("no song was chosen\n");
    break;
  }

  return 0;
}