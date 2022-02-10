/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
 {
 //Creat variables 
  int mark1 , mark2 , total;
  float average;

  //Get input from user
  printf("Enter mark 1 :");
  scanf("%d",&mark1);

  printf("Enter mark 2 :");
  scanf("%d",&mark2);
  
  //Calculation for the average
  total=mark1 + mark2 ;
  average =total/2;

  // Print average
  printf("The average is %.2f", average);

  //End of the process
  return 0;
}

