# include <stdio.h>
# include <string.h>

/*
    To accept input in VS Code, we have some setup to do for user input.
    Changed code runner settings
*/

int main() {
    
    // int age;
    // float gpa;
    // char grade;
    // char name[30]; // need to specify size if not defining it --> number of chars/bytes

    // java wouldn't allow this
    // there may be some values left in those areas of memory from a previous program

    // printf("%d\n", age);
    // printf("%f\n", gpa);
    // printf("%c\n", grade);
    // printf("%s\n", name);

    /*
    It's perfectly fine to declare variables without values, but just don't use them before assigning values
    By printing them before, we are given:
        32759
        0.000000

        @p_*≈
    If we do it again:
        32758
        -0.000000

        @pÖ÷
    By using a variable we haven't defined yet, we get UNDEFINED BEHAVIOR!
    Don't use a variable you haven't assigned a value yet!
    */

    // As best practice, it's good to set the initial values to 0 or some equivalent value

    int age = 0;
    float gpa = 0.0f; // f if it's a float; f isn't needed for a double
    // could just do 0, but 0.0f specifies to other developers that gpa should be a floating point number
    char grade = '\0'; // null terminator character --> effectively clears it out
    char name[30] = ""; // Set to an empty string --> still takes up 30 char/bytes

    // printf("%d\n", age);
    // printf("%f\n", gpa);
    // printf("%c\n", grade);
    // printf("%s\n", name);
    // Although it isn't strictly necessary, may want to consider assigning variables right away so that if you do access
    // the variables before assignning them, you don't lead to undefined behavior from values from previous programs
    // Now, when we use the variables before definintion, we get an excepted behavior of 0, or an equivalent value

// Getting User Input
    
    // To get user input, we will use: scanf();

    printf("Enter your age: "); // Prompt so the user knows what to type
    scanf("%d", &age); // & = "address of" operator --> "at the address of value 'age', we will stick a value within there"

    printf("Enter your gpa: ");
    scanf("%f", &gpa); // When typing in the gpa, there is a newline character within the input buffer: 3.2\n
    // When scanf() reads the floating point number, the new line character is still in the input buffer: \n
    // Can't use the output modifiers like in printf()!!!

    printf("Enter your grade: ");
    // scanf("%c", &grade);
    // We type in a char for grade, but scanf() reads the newline character that was in the input buffer
    // a shortcut to fix the newline problem is: scanf(" %c", grade) --> tells C program to skip the newline character
    scanf(" %c", &grade);
    // scanf(" %c") --> skips all whitespace (including newlines) before reading the char

    // printf("Enter your first name: ");
    // scanf("%s", &name);
    // This works for a single string without any spaces

    getchar();
    printf("Enter your FULL name: ");
    // scanf("%s", &name); // scanf can't read any whitespaces, it will stop reading after any whitespaces
    fgets(name, sizeof(name), stdin);
    // We instead use fgets(var name, var size, standard input)
    // sizeof() allows us to change the size of name without any manual change to the code
    // However, we still have the problem of the newline character being read
    // fgets() does not allow the same space trick like scanf(), so we use: getchar();
    // getchar(); "gets" the newline char

    // To fix the newline
    name[strlen(name) - 1] = '\0'; // Now: "John Kim\0" instead of "John Kim\n" --> Sets the array char at the end to null pntr

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name); // This has another newline character after because fgets() reads the entire line of input
    // To fix this issue, we will include another preprocessor directive: # include <string.h>




    return 0;
}
