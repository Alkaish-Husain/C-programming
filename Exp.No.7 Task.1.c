/* Experiment No:- 7.1
   Title   :-WAP to find the largest element in an array
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>

int main() {
  printf("\t\t\t\t\t*****Find the Largest Number*****\n\n");
  int n;

  // Enter the Elements of the Array
  printf("Enter the size:- ");
  scanf("%d", &n);

  if(n <= 0){
              printf("\nInvalid size! Please enter a size greater than zero.\n");
        return 1;  // Exit the program with an error code
    }



  int arr[n];  // Declare an array of size 'n'

  // Input the elements into the array
  printf("\nEnter %d elements:-  \n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Initialize largest element to the first element of the array
  int largest = arr[0];

  // Iterate through the array to find the largest element
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];  // Update largest if current element is greater
    }
  }

  // Display the largest element
  printf("\nThe largest element in the array is :- %d\n", largest);
}

/*
Output:-
                                        *****Find the Largest Number*****
Enter the size:- 5

Enter 5 elements:-
25 45 67 78 89

The largest element in the array is :- 89

Enter the size:- 0

Invalid size! Please enter a size greater than zero.*/
