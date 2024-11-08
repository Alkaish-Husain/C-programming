/* Experiment No:- 4
    Title   :-WAP to find all the prime numbers between two numbers.
    Name    :-Shaikh Alkaish Husain Ahmad Husain
    Class   :-F.E.(Computer Enigneering)
    Division:-D
    Roll No :-19
    UIN     :-241P088 */

#include <stdio.h>

// Function to check if a number is prime
int isprime(int x) {
  if (x <= 1) return 0;
  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  printf("\t\t\t\t\t\t*****Prime Finder*****\n");
  int a, b;
  // Enter the Starting and Ending Number
  printf("Enter the Starting Number:-");
  scanf("%d", &a);
  printf("Enter the Ending Number:-");
  scanf("%d", &b);
  // Ensure start is less than end
  if (a > b) {
    printf("Invalid range. Start should be less than or equal to end.\n");
    return 1;  // Exit with error
  }

  // Find and print all prime numbers in the range
  for (int i = a; i <= b; i++)
    if (isprime(i)) {
      printf("%d ", i);
    }

  return 0;
}

/*Ouput
                                                *****Prime Finder*****
Enter the Starting Number:-2
Enter the Ending Number:-10
2 3 5 7 */
