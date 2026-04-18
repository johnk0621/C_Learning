# include <stdio.h>
# include <stdbool.h>

void hello(char name[], int age); // Function Prototype
// Telling the Compiler the name, the return type, and parameters of the function
// Now, it works without error!
bool ageCheck(int age); // Function Prototype for ageCheck()

int main() {

    // function prototype = Provide the compiler with information about a function's
    //                      name, return type, and parameters before its actual defintiion.
    //                      Enables type checking and allows functions to be used before 
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    // Considered good practice to use function prototypes
    // Benefit: 

    hello("Spongebob", 30);
    // An issue with functions in C:
    //  Imagine this is a HUGE program with hundereds of functions.
    //  With C programs, we read them from the top down.
    //  Before we use a function, we have to define it.
    //  It would be nice if the main function was at the top
    //  BUT if we put main() above hello() we get an ERROR. Why?
    //  Our C Compiler doesn't know what the hello() fucntion is.
    //  We're trying to use the hello() fucntion before it's defined.

    // A way we can use the hello() function and define it later is by using function prototypes.

    if (ageCheck(30)) {
        printf("You're old enough to work at the Krusty Krab!\n");
    } else {
        printf("You must be at least 16 years old to work at the Krusty Krab\n");
    }

    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16;
}
