/* Experiment no:-1.2
   Title        :-WAP to get students PCM marks from the user
                  and find the average and eligibility.
   Name         :-Shaikh Alkaish Husain Ahmad Huasin
   Class        :-Computer Engineering
   Division     :-D
   Roll No      :-19
   UIN          :-241P088*/
#include<stdio.h>
    int main(){
        int a,b,c;
        float Average;
        printf("\t\t\t\t\t****Average Marks of the subjects****\n");
        //Enter the Marks
        printf("Enter your Maths Marks:-\t",a);
        scanf("%d",&a);

        printf("Enter your Physics Marks:- \t",b);
        scanf("%d",&b);

        printf("Enter your chemistry Marks:- \t",c);
        scanf("%d",&c);

        //Average Marks of the Maths , Physics And Chemistry Subjects
       Average=(a+b+c)/3;
        printf("\nThe average marks of the PCM is:- %f",Average);
        (Average>50)?printf("\nYour  are aligible"):printf("\nYour are not aligible");


    return 0;

}

/*Output:
                    ****Average Marks of the subjects****
Enter your Maths Marks:-        94
Enter your Physics Marks:-      62
Enter your chemistry Marks:-    61

The average marks of the PCM is:- 72
Your  are aligible*/
