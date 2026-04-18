# include <stdio.h>

int result = 0; // GLOBAL SCOPE
// At global scope, any part of the program can access and change the value in result
// However, this makes the program hard to debeug as any function can modify the variable
// Better to stick to local varibles, unless you want CONSTANTS --> more on that later

int add(int x, int y) {
    int result = x + y;
    return result; // variable declared for this lesson
}

/*
int subtract() {
    int result = x - y;
    return result; // variable declared for this lesson
}
*/

int main() {
    // variable scope = Refers to where a variable is recognized and acessible.
    //                  Variables can share the same name if
    //                  they're in different scopes {}

    // Two variables in the same scope can't share the same name!
    
    /*
    int result = 0;
    int result = 1;

    error: redefinition of 'result'
    */

    int result = add(3, 4); // each "result" is within their own scope

    printf("%d", result);

    /*
    int x = 5; // LOCAL VARIABLE
    int y = 2;
    int result1 = subtract(); 
    */
    
    // ERROR! The subtract function cannot see the declared variables of x and y within the scope of main()
    // Since no x or y is defined within the scope of subtract(), we get an error!
    // They are within a different local scope!
    // Think of main() and subtract() as our house and the neighbor's house
    // The neighbor doesn't know what's going on inside our house
    // They only know about x and y if we call them and tell them (passing the values in)

    return 0;
}

/*
Summary:
    LOCAL Variables = only known/seen/modified within a scope
    GLOBAL Variables = can be known/seen/modified from anywhere within the program
*/
