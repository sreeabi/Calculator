/**********************************************************************************************************************************************
                    ProjectName --> Calculator using Cli
                                    if-else , Switch-case , loops & functions are used
***********************************************************************************************************************************************/

#include <stdio.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    int choice;
    float num1, num2, result;


    while (1) {
        printf("\n----- Simple Calculator -----\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting Calculator...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf("Result = %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error: Division by zero!\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
