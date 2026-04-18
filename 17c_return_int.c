# include <stdio.h>

double getMax(double x, double y) {
    if (x >= y) {
        return x;
    } else {
        return y;
    }
}

int main() {

    double num1 = 0.0;
    double num2 = 0.0;
    double max = 0.0;

    printf("Max Number Getter\n");

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter a second number: ");
    scanf("%lf", &num2);

    max = getMax(num1, num2);
    
    printf("The max of %lf and %lf is %lf\n", num1, num2, max);

    return 0;
}