#include <stdio.h>
#include <stdlib.h> // For atof (convert string to double)

int main() {
    char input[20];       // To store the input expression (e.g., "2+3")
    char operator;        // To store the operator
    double num1, num2;    // To store the two numbers
    double result;        // To store the result of the operation

    // Prompt the user for input
    printf("Enter an expression (e.g., 2+3): ");
    scanf("%s", input);

    // Parse the input string
    if (sscanf(input, "%lf%c%lf", &num1, &operator, &num2) != 3) {
        printf("Invalid input format. Please use format like 2+3.\n");
        return 1; // Exit with error
    }

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
