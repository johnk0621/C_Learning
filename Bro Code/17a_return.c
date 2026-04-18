# include <stdio.h>

double cube(double num) {
    return num * num * num;
}

double square(double num) {
    return num * num;
}


int main() {

    // return = returns a value back to where you call a function

    /*
    int x = 2 * 2;
    int y = 3 * 3;
    int z = 4 * 4;
    */

    double num = 0;
    double result = 0;

    printf("Square Calculator\n");

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = square(num);
    
    printf("%lf squared is %.4lf\n", num, result);

    printf("\nCube Calculator\n");

    printf("Enter a number: ");
    scanf("%lf", &num);

    result = cube(num);
    
    printf("%lf cubed is %.4lf\n", num, result);


    return 0;
}
