/* Experiment No:- 5.2
    Title   :-WAP to find the factorial of a number using recursive function
    Name    :-Shaikh Alkaish Husain Ahmad Husain
    Class   :-F.E.(Computer Enigneering)
    Division:-D
    Roll No :-19
    UIN     :-241P088 */

#include <stdio.h>

// Recursive function to calculate factorial
int recursionFactorial(int a) {
  if (a == 0 || a == 1) {
    return 1;  // Factorial of 0 and 1 is 1
  }
  return a * recursionFactorial(a - 1);  // Recursive case
}

int main() {
  printf("\t\t\t\t\t*****Get a Factroial using Recurisive Funtion*****\n");
  int a, res;

  // Enter the Non-negative integer
  printf("Enter Non-negative integer:-");
  scanf("%d", &a);

  // Ensure the input is valid
  if (a < 0) {
    printf("Factorial is not defined for negative integers.\n");
    return 1;
  }
  // Function call
  res = recursionFactorial(a);
  // Display the result
  printf("Factorial of %d = %d\n", a, res);

  printf("Thank you for using the Factorial Calculator\n");

  return 0;
}
/*
Ouput:-
                                        *****Get a Factroial using Recurisive
Funtion***** Enter Non-negative integer:-10 Factorial of 10 = 3628800 Thank you
for using the Factorial Calculator*/
