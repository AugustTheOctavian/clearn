//  Print name, DOB, and mobile number
//
// Write a C program to print your name, date of birth, and mobile number.
// Expected Output:
//
// Name   : Alexandra Abramov  
// DOB    : July 14, 1975  
// Mobile : 99-9999999999


#include <stdio.h>
int main()
{
  char name[] = "Alexandra Abramov";
  char dob[] = "July 14, 1975";
  char mobile[] = "99-9999999999";

  printf("Name : %s\n", name);
  printf("D.O.B :%s\n", dob);
  printf("Mobile: %s\n", mobile);

  return 0;
}
