# include <stdio.h>

int main() {

// Arithmetic Operators: +, -, *, /, %, ++, --
    
    // int x = 2;
    int x = 10;
    int y = 3;
    int z = 0;

    // z = x + y; // addition: 5
    // z = x - y; // subtraction: -1
    // z = x * y; // multiplication: 6
    // z = x / y; // division: 0 --> since we're working with integers, it can't store decimal values
        // float z = 0;
        // printf("%f\n"); --> still prints 0.0000000 because still doing INTEGER division (no decimal)
    // z = x / y; when float z = 0; and float y = 3; --> prints 0.6666667
        // if either operand is a float, the whole expression is promoted to a float (could convert x or y or both to float)
    // z = x % y; // modulo: gives the remainder of division (format of %d)
    // x++; // increment: increment value by 1
    // x--; // decrement: decrement value by 1
    
// Augmented Assigned Variables
    
    // x = x + 2; // If we want to assign a new value to x and have it be the original value +2
    // x += 2; // Accomplishes the same thing as above
    // x -= 3; // x = x - 3
    // x *= 2; // x = x * 2
    // x /= 2; // x = x / 2

    printf("%d\n", z);

    return 0;
}
