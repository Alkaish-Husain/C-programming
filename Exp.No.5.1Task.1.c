/* Experiment No:- 5.1
    Title   :-WAP to find the factorial of a number using Iterative Function
    Name    :-Shaikh Alkaish Husain Ahmad Husain
    Class   :-F.E.(Computer Enigneering)
    Division:-D
    Roll No :-19
    UIN     :-241P088 */

#include <stdio.h>
// Iterative function to calculate factorial
int factorial_iterative(int a) {
  int fact = 1;

  // Calculating Factorial
  for (int i = 1; i <= a; i++) {
    fact = fact * i;  // Multiply fact by i
  }
  return fact;
}
int main() {
  printf("\t\t\t\t\t*****Get a Factorial using Iterative Function*****\n");
  int x, result;
  // Enter a Non-negative integer
  printf("Enter Non-negative integer :-");
  scanf("%d", &x);

  // Check for negative input
  if (x < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    // Calculate factorial
    result = factorial_iterative(x);
    // Display the result
    printf("Factorial of %d = %d\n", x, result);
  }
  printf("Thank you for using the Factorial Calculator\n");
  return 0;
}
/*
Output:-
                                        *****Get a Factorial using Iterative
Function***** Enter Non-negative integer :-10 Factorial of 10 = 3628800 Thank
you for using the Factorial Calculator*/
