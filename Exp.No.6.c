/* Experiment No:- 6
   Title   :-WAP to define a counter function to print how many times the
             function is called use storage classes.
   Name    :-Shaikh Alkaish Husain AhmadHusain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088 */

#include <stdio.h>

// Counter function
void counter() {
  static int a = 0;
  a++;  // Increment call count
  printf("Called %d\n", a);
}

int main() {
  printf("\t\t\t\t\t*****Counter Function*****\n");
  counter();
  counter();
  counter();
  counter();
}
/*
Ouput:-
                                        *****Counter Function*****
Called 1
Called 2
Called 3
Called 4*/
