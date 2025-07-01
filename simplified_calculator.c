/**********************************************************************************************************************************************
                    ProjectName --> Simplified Calculator
                    output viewed --> Cli
                                    Simplified code for Calculator
                                    if-else , Switch-case , loops & functions are used
***********************************************************************************************************************************************/


#include <stdio.h>

// Arithmetic functions
double add(double a, double b)       { return a + b; }
double subtract(double a, double b)  { return a - b; }
double multiply(double a, double b)  { return a * b; }
double divide(double a, double b)    { return a / b; }
int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) break;
        if (choice < 1 || choice > 5) {
            printf("Invalid choice.\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1: printf("Result = %.2lf\n", add(num1, num2)); break;
            case 2: printf("Result = %.2lf\n", subtract(num1, num2)); break;
            case 3: printf("Result = %.2lf\n", multiply(num1, num2)); break;
            case 4:
                if (num2 != 0)
                    printf("Result = %.2lf\n", divide(num1, num2));
                else
                    printf("Error: Division by zero!\n");
                break;
        }
    }

    printf("Calculator closed.\n");
    return 0;
}
