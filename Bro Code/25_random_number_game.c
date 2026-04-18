# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main() {

    // Random Number Guessing Game

    srand(time(NULL)); // default seed is typically 1; w/o setting seed, we get same number each time

    int guess = 0;
    int tries = 0;
    int min = 0;
    int max = 0;
    int answer = 0;

    printf("*** RANDOM NUMBER GAME ***\n");
    
    printf("Set the minimum: ");
    scanf("%d", &min);

    printf("Set the maximum: ");
    scanf("%d", &max);

    answer = (rand() % (max - min + 1)) + min;

    do {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if (guess < answer) {
            printf("TOO LOW!\n");
        } else if (guess > answer) {
            printf("TOO HIGH!\n");
        } else {
            printf("Correct!\n");
        }
    } while (guess != answer);

    printf("The answer is %d\n", answer);
    printf("You took %d tries\n", tries);

    return 0;
}
