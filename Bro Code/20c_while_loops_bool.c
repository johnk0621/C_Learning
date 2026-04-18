# include <stdio.h>
# include <stdbool.h>

int main() {

    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing a game.\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y') { // are string operators that can handle casing
            isRunning = false;
        }
    }

// Equivalent do-while loop
    do {
        printf("You are playing a game.\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response);

        if (response != 'Y' && response != 'y') { // are string operators that can handle casing
            isRunning = false;
        }   
    } while (isRunning);

    printf("You exit the game\n");

    return 0;
}
