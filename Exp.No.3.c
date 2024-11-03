/* Experiment No:- 3
   Title   :-WAP to design a menu driven calculator using switch and goto
   Name    :-Shaikh Alkaish Husain Ahmad Husain
   Division:-F.E.(Computer Enigneering)
   UIN     :-241P088*/

#include<stdio.h>

    int main(){

        printf("\t\t\t\t\t*****Menu Driven Calculator*****\n");
        float a,b,result;
        char operation,i,cont;


        printf("+:-Addition\n");

        printf("-:-Subtraction\n");

        printf("*:-Multiplication\n");

        printf("/:-Division\n");

        printf("%%:-Modolus\n");


        Start:

        printf("Enter the Num-1:-");

        scanf("%f",&a);

        printf("Enter the Num-2:-");

        scanf("%f",&b);

        printf("Enter the operation:-");

        scanf(" %c",&operation);


        switch(operation){
        case '+':
        result = a + b;
        printf("%f + %f = %f\n",a,b,result);
        break;

        case '-':
        result = a - b;
        printf(" %f - %f =%f\n",a,b,result);
        break;

        case '*':
        result = a * b;
        printf("%f * %f =%f\n",a,b,result);
        break;

        case '/':
        result = a / b;
        printf("%f / %f =%f\n",a,b,result);
        break;

        case '%':
        result  = (int)a % (int)b;
        printf("%d mod %d =%d\n",(int)a,(int)b,(int)result);
        break;

        default:
           printf("Invalid Operation\n");
                return 0;
        }


                printf("Continue ? (Y/N):");
                scanf(" %c",&cont);
                if (cont== 'N'){
                printf("Thank you for using Calculator");
                return 0;
                }



         goto Start;
         return 0;
}
/*
Output:-
                                        *****Menu Driven Calculator*****
+:-Addition
-:-Subtraction
*:-Multiplication
/:-Division
%:-Modolus
Enter the Num-1:-24
Enter the Num-2:-45
Enter the operation:-+
24.000000 + 45.000000 = 69.000000
Continue ? (Y/N):N
Thank you for using Calculator*/



