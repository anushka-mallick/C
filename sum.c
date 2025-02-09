#include <stdio.h>
#include <stdlib.h>

int main() {
    char choice;
    printf("Do you want to add 2 numbers?[y/n] ");
    scanf("%c", &choice);
//    printf("%c", choice);

    if (choice != 'y' && choice != 'Y') exit(1);

    int num1, num2;
    printf("\nEnter 2 numbers\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    printf("\nThe sum of %d and %d is %d.", num1, num2, sum);

    return 0;
}