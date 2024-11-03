/* Experiment No:- 5
    Title   :-WAP to find the factorial of a number using iterative and
              recursive function
    Name    :-Shaikh Alkaish Husain Ahmad Husain
    Class   :-F.E.(Computer Enigneering)
    Division:-D
    Roll No :-19
    UIN     :-241P088 */

#include <stdio.h>

int recursionFactorial(int a) {
  if (a == 1) {
    return 1;
  }
  return a * recursionFactorial(a - 1);
}

int main() {
  printf("\t\t\t\t\t*****Factorialize of Any Number*****\n");
  int a, res;

  printf("Enter the Number:-");
  scanf("%d", &a);

  res = recursionFactorial(a);

  printf("%d", res);

  return 0;
}
/*
Ouput:-
                                        *****Factorialize of Any Number*****
Enter the Number:-10
3628800*/
