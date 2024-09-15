#include <stdio.h>

int main() {
    int input;  
    int sum, mult, div, sub, a, b;

    printf("\nWelcome to the C Calculator!\n");
    
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("\nEnter the operation you want to perform:\n");
    printf("1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
    scanf("%d", &input); 

    switch (input) {
        case 1:
            sum = a + b;
            printf("Sum of the numbers is: %d\n", sum);
            break;

        case 2:
            if (a >= b) {
                sub = a - b;
                printf("Difference of the numbers is: %d\n", sub);
            } else {
                printf("Since b is greater than a, the result would be a negative number.\n");
            }
            break;

        case 3:
            mult = a * b;
            printf("Multiplication of the numbers is: %d\n", mult);
            break;

        case 4:
            if (b != 0) {
                div = a / b;
                printf("Division of the numbers is: %d\n", div);
            } else {
                printf("Division by zero is invalid!\n");
            }
            break;

        default:
            printf("Please enter a valid operation number (1, 2, 3, or 4).\n");
            break;
    }

    return 0;
}
