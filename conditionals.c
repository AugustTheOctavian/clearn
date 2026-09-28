// #include <stdio.h>
// int main()
// {
//   // NOTE: apparently the code down won't work you need to learn strcmp()

//   // char glass_type[] = "wine";
//   // if (glass_type == "wine")
//   // {
//   //   printf("Wine\n");
//   // }
//   // else if (glass_type == "whiskey")
//   // {
//   //   printf("Whiskey\n");
//   // }
//   // else
//   // {
//   //   printf("None\n");
//   // }

//   //
//   // int x = 12;
//   // for (int i = 0; i<=12; i++)printf("%d\n", i);

//   // int i = 1;
//   // // if (i < 10)
//   // //   {
//   // //     printf("yes, it's equal\n");
//   // //   }
//   // // if(i <= 10)
//   // //   {
//   // //     printf("no, It's not\n");
//   // //   }

//   // if (i == 10)
//   //   {
//   //     printf("yes, i is 10\n");
//   //   }
//   // else
//   // {
//   //   printf("no, I is not 10.\nWhich pmo frfr.\n"); // tbh, gnggggg
//   // }

//   // return 0;
//   //

//   int i = 0;
//   while( i < 10)
//     {
//       printf("%d\n", i);
//       i++;
//     }
//   printf("all done\n");
//   }

#include <stdio.h>
int main(void)
{
  // int i = 0;
  // // do
  // // {
  // //   printf("Hello\n");
  // //   i++;
  // // } while (i <= 10);

  // for (int j = 0 ; j<=12; j++)
  // {
  //   printf("j\n");
  // }

  int goat_count = 5;

  switch (goat_count)
  {
  case 0:
    printf("got zero goat bud, no women for ye\n");
    break;
  case 1:
    printf("got one goat\n");
    break;
  case 2:
    printf("Got 2 goats, 2 more you may marry my daughter young man, along with 5 years of your slave labor to me\n");
    break;
  default:
    printf("Meh, seem you got no bitches.\nI had a dream I can buy my way to heaven, when I woke up I spent that on a necklace\n");

    break;
  }

  return 0;
}