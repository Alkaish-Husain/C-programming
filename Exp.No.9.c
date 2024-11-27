/* Experiment No:- 9
   Title   :- Design a structure student_record to  contain name, roll_number,
              and total marks obtained. Write a program to read 5 students data from the
              user and then display the topper on the screen
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include <stdio.h>

// Define the structure for student record
struct student_record {
  char name[50];
  int roll_number;
  float total_marks;
};

int main() {
  printf("\t\t\t\t\t*****Students Details*****\n");

  // Define the structure
  struct student_record students[5];  // Array to store records of 5 students
  int topper_index = 0;               // Index of the topper

  // Input data of 5 students
  printf("Enter details of 5 students:-\n");

  for (int i = 0; i < 5; i++) {
    printf("\nEnter the Student Data:- %d \n", i + 1);


    // Read the student's Name
    printf("Enter the Name:- ");
    gets(students[i].name); // Read a Name with space

    // Read the student's Roll Number
    printf("Enter the Roll Number:- ");
    scanf("%d", &students[i].roll_number);

    // Read the student's Total marks
    printf("Enter the Total marks:- ");
    scanf("%f", &students[i].total_marks);

    // Clear input buffer for leftover newline character from scanf
        getchar();  // This prevents the next gets() from being skipped

    // Update topper index if current student's marks are higher
    if (students[i].total_marks > students[topper_index].total_marks) {
      topper_index = i;
    }
  }



  // Display the Toper Details
  printf("\nTopper Detils:-\n");
  printf("Name:- %s\n", students[topper_index].name);
  printf("Roll Number:- %d\n", students[topper_index].roll_number);
  printf("Total Marks:- %.2f\n", students[topper_index].total_marks);

  return 0;
}
/*
Output:-
                                       *****Students Details*****
Enter details of 5 students:-

Enter the Student Data:- 1
Enter the Name:- Ayan Husain
Enter the Roll Number:- 1
Enter the Total marks:- 95.20

Enter the Student Data:- 2
Enter the Name:- Ajaz khan
Enter the Roll Number:- 2
Enter the Total marks:- 70.00

Enter the Student Data:- 3
Enter the Name:- Aamir
Enter the Roll Number:- 3
Enter the Total marks:- 85.20

Enter the Student Data:- 4
Enter the Name:- Zaid
Enter the Roll Number:- 4
Enter the Total marks:- 67.23

Enter the Student Data:- 5
Enter the Name:- Mashood
Enter the Roll Number:- 5
Enter the Total marks:- 90.00

Topper Detils:-
Name:- Ayan Husain
Roll Number:- 1
Total Marks:- 95.20

*/
