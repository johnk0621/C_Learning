# include <stdio.h>
# include <stdbool.h> // required to use booleans

int main() {
    // varible = A reusable container for a value
    //           Behaves as if it were the value it contains

// INTEGER

    int age = 25; // integer = whole numbers
    int year = 2026;
    int quantity = 4;
    
    printf("You are age %d years old\n", age); // For printing with int var, %d --> decimal
    printf("The year is %d\n", year);  // % is a format specifier
    printf("You have ordered %d x items\n\n", quantity);

// FLOATING POINT NUMBER

    float gpa = 3.5; // floating point = numbers with a decimal portion (6-7 digits after decimal)
    float price = 13.99; // float = 4 bytes (32 bits)
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa); // %f is for floating point
    // C, by default, prints out 6 digits after the decimal when working w/ floating point numbers
    // Can fix by putting %.1f --> specifies only 1 place after decimal
    printf("Your gpa is %.1f\n", gpa); // Tidy version
    printf("The price is $%f\n", price);
    printf("The price is $%.2f\n", price); // 2 decimal tidy
    printf("The temperature is %f°F\n", temperature);
    printf("The temperature is %.1f°F\n\n", temperature);

// DOUBLE

    double pi = 3.14159265358979; // double = long floating point number w/ decimal portion (15-16 after decimal)
    double e = 2.7182818284590; // double = 8 bytes (64 bits)

    printf("The value of pi is %lf\n", pi); // %lf = long floating point number;
    // Recall: default of C is to display 6 digits after the decimal
    printf("The value of pi is %.15lf\n", pi); // Have to specify the number of digits after using the .x modifier
    printf("The value of e is %.15lf\n\n", e); // Having a .x number > the variable results in padded 0's
    // Probably won't use double as often as float

// CHARACTER

    char grade = 'C'; // character = single character surrounded by single quotes ''
    char symbol = '!'; // char = 1 byte (8 bits)
    char currency = '$';

    printf("Your grade is %c\n", grade); // %c = char
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n\n", currency);

// "STRINGS"
    // C does NOT have Strings; instead, it has an array of characters

    char name[] = "Ball Sack"; // This is an array of characters; arrays can store more than one value
    char food[] = "Gyro";
    char email[] = "ballsack123@gmail.com"; // Can include numbers in strings, but they're treated as chars (no operations)

    printf("Hello %s\n", name); // $s = string
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n\n", email);

// BOOLEANS
    // Requires a new preprocessor directive: # include <stdbool.h>

    bool isOnline = false; // boolean = either true (1) or false (0)
    bool isStudent = true; // bool = 1 byte (specifically since C99 and on)
    // Before C99, there was no standard boolean variable --> traditionally used existing integer types (i.e. char, int)
    // 0 is considered false and any non-zero value is true (-1, 99, 100, etc.)
    bool forSale = false;
    
    printf("%d\n", isOnline); // prints 0 because false = 0
    // booleans are used for if statements and other things usually

    // Sneak Peak
    if(isOnline){
        printf("You are online\n");
    } else {
        printf("You are offline\n");
    }

    if(isStudent){
        printf("You are a student\n");
    } else {
        printf("You are not a student\n");
    }

    if(forSale){
        printf("That item is for sale\n");
    } else {
        printf("That item is not for sale\n");
    }

    return 0;
}

/*
Summary:
    * int = whole numbers (4 bytes in modern systems)
    * float = single-precision decimal number (4 bytes)
    * double = double-precision decimal number (8 bytes)
    * char = single character (1 byte)
    * char[] = array of characters (size varies, like a "string")
    * bool = true or false (1 byte, requires <stdbool.h>)
*/
