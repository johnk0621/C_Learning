# include <stdio.h>
# include <string.h>

void happyBirthday(char name[], int age) { // parameters are what the function expects to receive
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", name);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old!\n\n", age);
}

int main() {
    
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // fgets() is a build in FUNCTION
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);
    
    happyBirthday(name, age); // arguments are what you send a function
    // In order to use a function (call it), you have to pass in arguments
    // Like on a phone call, you argue into the phone   

    // When passing in arguments, you have to pay attention to the number of parameters and the types
    // Argument and parameter names do not have to match

    return 0;
}
