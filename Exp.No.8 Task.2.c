/* Experiment No:- 8.2
   Title   :- WAP to check if the entered string is palindrome or not.
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int length, is_palindrome = 1;

  printf("\t\t\t\t\t*****Palindrome Checker*****\n\n");

  // Enter the string
  printf("Enter a string:- ");
  gets(str); // read a  string with spaces

  // Claculate the length of the string
  length = strlen(str);

  // Check for palindrome by comparing characters from both ends
  for (int i = 0; i < length / 2; i++) {
    if (str[i] != str[length - i - 1]) {
      is_palindrome = 0;  // Not a palindrome
      break;
    }
  }
  // Display the result
  if (is_palindrome) {
    printf("\nIt's a palindrome");
  } else {
    printf("\nIt's not a palindrome");
  }

  return 0;
}
/*
Output:-
                                        *****Palindrome Checker*****

Enter a string:- madam

It's a palindrome

Enter a string:- Alkaish

It's not a palindrome*/
