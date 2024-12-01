/*Expt 11 - Task 1
   Module 4:- Files
   Aim     :-WAP to maintain a simple employee database
             using file handling.
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Roll No :-19
   UIN     :-241P088*/

#include <stdio.h>

// Define a structure to hold employee details
struct employee {
  int id;
  char name[50];
  float salary;
};

// Function to add employee details to the file
void add_employee() {
  struct employee emp;
  FILE *file = fopen("employee_database.txt", "a");

  if (file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  // Input employee details
  printf("Enter Employee ID:- ");
  scanf("%d", &emp.id);
  printf("Enter Employee Name:- ");
  getchar();
  gets(emp.name);
  printf("Enter Employee Salary:- ");
  scanf("%f", &emp.salary);

  // Write employee data to the file
  fprintf(file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
  fclose(file);
  printf("Employee record added successfully!\n");
}

// Function to display all employee records from the file
void display_employees() {
  struct employee emp;
  FILE *file = fopen("employee_database.txt", "r");

  if (file == NULL) {
    printf("No employee records found!\n");
    return;
  }

  printf("\nEmployee Records:-\n");
  printf("ID\tName\t\tSalary\n");
  printf("---------------------------------\n");

  // Read and display each employee record from the file
  while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
    printf("%d\t%-15s%.2f\n", emp.id, emp.name, emp.salary);
  }

  fclose(file);
}
// Function to edit an employee records
void edit_employee() {
  struct employee emp;
  FILE *file = fopen("employee_database.txt", "r");
  FILE *temp_file = fopen("temp.txt", "w");
  int id, found = 0;

  if (file == NULL || temp_file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  printf("Enter Employee ID to edit:- ");
  scanf("%d", &id);

  // Read and ubdate employee record
  while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
    if (emp.id == id) {
      found = 1;
      printf("Enter the new Empolyee name:- ");
      getchar();
      gets(emp.name);
      printf("Enter new Empolyee Salary:- ");
      scanf("%f", &emp.salary);
    }
    fprintf(temp_file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
  }
  fclose(file);
  fclose(temp_file);

  if (found) {
    remove("employee_database.txt");
    rename("temp.txt", "employee_database.txt");
    printf("Employee record updated successfully!\n");
  } else {
    printf("Employee ID not found!\n");
    remove("temp.txt");
  }
}
// Function to delete an employee record
void delete_employee() {
  struct employee emp;
  FILE *file = fopen("employee_database.txt", "r");
  FILE *temp_file = fopen("temp.txt", "w");
  int id, found = 0;

  if (file == NULL || temp_file == NULL) {
    printf("Error opening file!\n");
    return;
  }

  printf("Enter Employee ID to delete:- ");
  scanf("%d", &id);

  //
  while (fscanf(file, "%d %f %[^\n]", &emp.id, &emp.salary, emp.name) != EOF) {
    if (emp.id != id) {
      fprintf(temp_file, "%d %.2f %s\n", emp.id, emp.salary, emp.name);
    } else {
      found = 1;
    }
  }

  fclose(file);
  fclose(temp_file);

  if (found) {
    remove("employee_database.txt");
    rename("temp.txt", "employee_database.txt");
    printf("Employee record deleted successfully!\n");
  } else {
    printf("Employee ID not found!\n");
    remove("temp.txt");
  }
}

int main() {
  int choice;

  printf("\t\t *** Employee Database *** \n\n");

  while (1) {
    // Menu for user
    printf("\nEmployee Database Menu:\n");
    printf("1. Add Employee Record\n");
    printf("2. Display Employee Records\n");
    printf("3. Edit Employee Records\n");
    printf("4. Remove Employee Records\n");
    printf("5. Exit\n");
    printf("Enter your choice:- ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        add_employee();
        break;
      case 2:
        display_employees();
        break;
      case 3:
        edit_employee();
        break;
      case 4:
        delete_employee();
        break;
      case 5:
        printf("Exiting the program.\n");
        return 0;
      default:
        printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}

/* OUTPUT

                 *** Employee Database ***


Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice: 1
Enter Employee ID: 101
Enter Employee Name: Sanjay Singh
Enter Employee Salary: 20000
Employee record added successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice: 1
Enter Employee ID: 102
Enter Employee Name: Junaid
Enter Employee Salary: 230000
Employee record added successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Exit
Enter your choice: 1
Enter Employee ID: 103
Enter Employee Name: Jon Doe
Enter Employee Salary: 12000
Employee record added successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
101     Sanjay Singh   20000.00
102     Junaid         230000.00
103     Jon Doe        12000.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice: 3
Enter Employee ID to edit:- 101
Enter the new Empolyee name:- Ayan Husain
Enter new Empolyee Salary:- 100000
Employee record updated successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice:- 2

Employee Records:
ID      Name            Salary
---------------------------------
101     Ayan Husain    100000.00
102     Junaid         230000.00
103     Jon Doe        12000.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice:- 3
Enter Employee ID to edit:- 104
Employee ID not found!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice:- 4
Enter Employee ID to delete:- 103
Employee record deleted successfully!

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice: 2

Employee Records:
ID      Name            Salary
---------------------------------
101     Ayan Husain    100000.00
102     Junaid         230000.00

Employee Database Menu:
1. Add Employee Record
2. Display Employee Records
3. Edit Employee Records
4. Remove Employee Records
5. Exit
Enter your choice:- 4
Enter Employee ID to delete:- 103
Employee ID not found!*/
