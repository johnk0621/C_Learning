# include <stdio.h>

int main() {

    // if statement = Do some code if a condition is true.
    //                If the condition is false, don't do it (or do something else)

    // int age = 20;
    // int age = 12;
    // int age = -5;
    // int age = 0;
    // int age = 90;
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    /*
    if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age >= 65) {
        printf("You are a senior.\n");
        // This is not printed because it goes from top to bottom and 90 fits the first if statement
        // Order of the conditions DOES matter!!
    } else if (age < 0) {   // can add an infinite amount of else-if statements
        printf("You haven't been born yet!\n");
    } else if (age == 0) { // == for direct comparison; single = would think setting age to 0
        printf("You are a newborn!\n");
    } else {
        printf("You are a chlid.\n");
    }
    */
    
    if (age >= 65) {
        printf("You are a senior.\n");
    } else if (age >= 18) {
        printf("You are an adult.\n");
    } else if (age < 0) {
        printf("You haven't been born yet!\n");
    } else if (age == 0) {
        printf("You are a newborn!\n");
    } else {
        printf("You are a chlid.\n");
    }

    return 0;
}
