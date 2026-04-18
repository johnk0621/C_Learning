# include <stdio.h>

int main() {
    // switch = An alternative to using many if-else statements
    //          More efficient with fixed integer values
    //          Helps with readability

    char dayOfWeek = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek);

    switch (dayOfWeek) {
        case 'M':
            printf("It is Monday\n");
            break; // required! else, it will continue to execute all of the cases below it!
        case 'T': 
            printf("It is Tuesday\n");
            break;
        case 'W': 
            printf("It is Wednesday\n");
            break;
        case 'R': 
            printf("It is Thursday\n");
            break;
        case 'F': 
            printf("It is Friday\n");
            break;
        case 'S': 
            printf("It is Saturday\n");
            break;
        case 'U': 
            printf("It is Sunday\n");
            break;
        default: // Default case is when there is no case match!
            printf("Please only enter a character (M, T, W, R, F, S, U)!");
    }
    
    // switch cascades from the first match to the cases below it!!
    // switches work very well with integers and characters!!

    return 0;
}
