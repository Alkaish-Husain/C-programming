/* Experiment No:- 10.1
   Title   :- WAP to add two numbers using pointers
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Calss   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>

int main() {
  printf("\t\t\t\t\t*****Sum of Two Numbers*****\n\n");
  int num1, num2, sum;

  // Enter the two number
  printf("Enter the First number:- ");
  scanf("%d", &num1);

  printf("\nEnter the Second number:- ");
  scanf("%d", &num2);

  // Initialize pointers to the number
  int *p = &num1;
  int *q = &num2;

  // Perform Addition using pointer
  sum = *p + *q;

  // Display the result
  printf("\nThe Sum of %d and %d is:- %d.\n", *p, *q, sum);

  return 0;
}
/*
Output:-

                                         *****Sum of Two Numbers*****

Enter the First number:- 10

Enter the Second number:- 25

The Sum of 10 and 25 is:- 35.
*/
