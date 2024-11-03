/* Experiment No:- 4
    Title   :-WAP to find all the prime numbers between two numbers.
    Name    :-Shaikh Alkaish Husain Ahmad Husain
    Class   :-F.E.(Computer Enigneering)
    Division:-D
    Roll No :-19
    UIN     :-241P088 */

#include <stdio.h>

int isprime(int x) {
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    printf("\t\t\t\t\t\t*****Prime Finder*****\n\n");
    int num_1, num_2;
    printf("Enter the Starting and Ending Number ");
    scanf("%d %d", &num_1, &num_2);

    for (int i = num_1; i <= num_2; i++) {
        if (isprime(i) == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}

/*Ouput
                                                *****Prime Finder*****

Enter the Starting and Ending Number 2 10
2 3 5 7 */
