/* Experiment No.2.1
   Title   :-WAP to find if entered number is even or odd.
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Class   :-Computer Engineering
   Division:-D
   Roll No :-19
   UIN     :-241P088 */

#include <stdio.h>

    int main(){
        int a;
        printf("\t\t\t\t****Enter Even And Odd Numbers****\n");
        //Enter the number
        printf("Enter the number :-");
        scanf("%d",&a);

        //If number is Divisible by 2 then the number is even
        //and the number is not divisible by 2 then the number is odd
        if(a%2==0)
        {
            printf("The Number is Even");
        }
        else
        {
            printf("The Number is Odd");
        }

    return 0;
}
/*
Ouptut
                                ****Enter Even And Odd Numbers****
Enter the number :-5
The Number is Odd*/
