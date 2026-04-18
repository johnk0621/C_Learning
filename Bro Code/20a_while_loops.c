# include <stdio.h>

int main() {

    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter the while loop

    int number = 0;

    while(number <= 0) {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }

    // we want to avoid infinite loops --> CTRL + C to end program
    // need the condition to be false in order to escape the loop

    // do-while loop
    // while loop --> check condition first, then enter loop
    // do-while --> do loop once, then check condition at end

    do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    } while (number <= 0);

    return 0;
}
