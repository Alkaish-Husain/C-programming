
/* Experiment No:-2.2
   Title     :-WAP to find the sum of all the odd numbers between numbers entered by the user.
   Name      :-Shaikh Alkaish Husain Ahmad Husain
   Class     :-Computer Engineering
   Division  :-D
   Roll No   :-19
   UIN       :-241P088*/



#include<stdio.h>
    int main(){
        printf("\t\t\t\t\t****Sum of the all odd Numbers****\n");
        //Enter the odd number
        int start_num,end_num,sum=0,i;
        printf("Enter the Starting  odd Number:-");
        scanf("%d",&start_num);

        printf("Enter the Ending  odd Number:-");
        scanf("%d",&end_num);

        if(start_num>end_num){
            printf(" Error:-The  Starting number is grater than Ending number ");
            return 0;
        }

        for(int i=start_num;i<end_num;i++){
            if(i%2 ==1){


            }
             sum=sum+i;
        }

        printf("Sum of all odd Numbers %d between %d = %d",start_num,end_num,sum);

    return 0;
}


/*
Ouput
                                        ****Sum of the all odd Numbers****
Enter the Starting  odd Number:-1
Enter the Ending  odd Number:-10
Sum of all odd Numbers 1 between 10 = 45*/
