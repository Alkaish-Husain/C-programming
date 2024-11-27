/* Experiment No:- 7.2
   Title   :-WAP to calculate sum of two matrix.
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-F.E.(Computer Enigneering)
   Division:-D
   Roll No :-19
   UIN     :-241P088*/
#include<stdio.h>

int main(){

printf("\t\t\t\t\t*****Sum Of Two Matrix*****\n\n");
int m, n;

 // Input the number of rows and columns
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &m, &n);

      // Validate the input for rows and columns
    if (m <= 0 || n <= 0) {
        printf("\nInvalid matrix dimensions! Rows and columns must be greater than zero.\n");
        return 1; // Exit the program with an error code
    }

int matrix1[m][n], matrix2[m][n], sum[m][n];


// Input elements for the first matrix
    printf("\nEnter elements for the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ",i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
// Input elements for the second matrix
    printf("\nEnter elements for the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
// Calculate the sum of the two matrices
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    // Display the result of the matrix sum
    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*Output:-
                                        *****Sum Of Two Matrix*****

Enter the number of rows and columns for the matrices: 2 2

Enter elements for the first matrix:
Enter element at [1][1]: 2
Enter element at [1][2]: 3
Enter element at [2][1]: 4
Enter element at [2][2]: 5

Enter elements for the second matrix:
Enter element at [1][1]: 6
Enter element at [1][2]: 7
Enter element at [2][1]: 8
Enter element at [2][2]: 9

The sum of the two matrices is:
8 10
12 14

*/
