/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  float mark1,mark2,totle,avg;

  printf("Input marks for subject 1 : ");
  scanf("%f",&mark1);

  printf("Input marks for subject 2 : ");
  scanf("%f",&mark2);

  totle = mark1 + mark2 ;
  avg = totle/2.0 ;

  printf("average of two marks : %.2f ", avg);
  return 0;
}

