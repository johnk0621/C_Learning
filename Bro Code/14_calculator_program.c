# include <stdio.h>

int main() {

    // Calculator Program

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Calculator Program\n");

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Which operation would you like to perform (+ - * /)? ");
    scanf(" %c", &operator); // space in front of % ignores all whitespace before

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("You can't divide by zero!\n");
            } else {
                result = num1 / num2;
            } break;
        default:
            printf("Invalid operator! Please enter one of the valid operators (+ - * /)\n");
    }

    if (result != 0) {
        printf("%lf %c %lf = %.4lf\n", num1, operator, num2, result);
        printf("Result: %.4lf", result);
    }

    return 0;
}
