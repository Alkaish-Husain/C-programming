/* Experiment No:- 8.1
   Title   :-WAP to find the length of a string.
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>

int main() {
  char str[100];   // Declare a character array to store the input string
  int length = 0;  // Variable to store the length of the string

  printf("\t\t\t\t\t*****Length of string Finder*****\n\n");

  // Input the string from the user
  printf("Enter a string:- ");
  gets(str); // read a string with spaces

  // Claculate the length
  for (int i = 0; str[i] != '\0'; i++) {
    length++;
  }

  // Display the length of a string
  printf("\nTotal Length of the string is:- %d\n", length);

  return 0;
}

/*Output:-
                                        *****Length of string Finder*****


Enter a string:- Alkaish

Total Length of the string is:- 7

Enter a string:- Ayan Husain

Total Length of the string is:- 11

*/
