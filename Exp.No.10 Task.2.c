/* Experiment No:- 10.2
   Title   :-WAP to print the elements of an array in
             reverse order using pointers
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>

int main() {
  printf("\t\t\t\t\t*****Array in Reverse order*****\n");
  int n;

  // Input the size of the array
  printf("Enter the number of elements in array:- ");
  scanf("%d", &n);

  int arr[n];

  // Input the elements of the array
  printf("Enter %d elements:-\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Pointer pointing to the Last element of the array
  int *ptr = arr + n - 1;

  printf("Array elements in reverse order:- \n");

  // Loop through the array in reverse order using the pointer
  for (int i = 0; i < n; i++) {
    printf("%d ", *ptr);  // Print the current element
    ptr--;                // Move the pointer to the previous element
  }
  printf("\n");

  return 0;
}

/*
Ouput:-
                                        *****Array in Reverse order*****
Enter the number of elements in array:- 5
Enter 5 elements:-
23 45 67 89 45
Array elements in reverse order:-
45 89 67 45 23*/
