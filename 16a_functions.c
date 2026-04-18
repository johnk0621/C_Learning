# include <stdio.h>

// function = A reusable section of code that can be invoked / "called"
//            The function will also have parameters, with the types definied
//            Arguments can be sent to a function so that it can use them

void happyBirthday() {
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear [name]!");
    printf("\nHappy Birthday to you!");
    printf("\nYou are [age] years old!\n");
}


int main() {

    happyBirthday();
    happyBirthday();
    happyBirthday();

    // That's a lot of repeated code

    /*
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear [name]!");
    printf("\nHappy Birthday to you!");
    printf("\nYou are [age] years old!\n");

    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear [name]!");
    printf("\nHappy Birthday to you!");
    printf("\nYou are [age] years old!\n");

    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear [name]!");
    printf("\nHappy Birthday to you!");
    printf("\nYou are [age] years old!\n");
    */

    return 0;
}