#include <stdio.h>

float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    if (y == 0) {
        printf("Error! Cannot divide by zero.\n");
        return 0;
    }
    return x / y;
}

int main() {
    char choice;
    float num1, num2;

    do {
        printf("Select operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                printf("Result: %.2f\n", add(num1, num2));
                break;
            case '2':
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                printf("Result: %.2f\n", subtract(num1, num2));
                break;
            case '3':
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                printf("Result: %.2f\n", multiply(num1, num2));
                break;
            case '4':
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                printf("Result: %.2f\n", divide(num1, num2));
                break;
            case '5':
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number from 1 to 5.\n");
        }
    } while(choice != '5');

    return 0;
}

