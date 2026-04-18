# include <stdio.h>
# include <stdlib.h> 
// preprocessor directive that primarily contains functions for: Memory allocation, numeric conversions, 
// pseudo-random number generation, and process control fucntions --> "standard library"
# include <time.h> // preprocessor directive that includes several functions for time manipulation and formatting

int main() {
    
    // Pseudo-random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 Advanced: Mersenne Twister or /dev/random

    // printf("%d", rand()); // plugging a base seed value into a math fomrula --> similar to minecraft seed value
    // by doing this repeatedly, we keep getting the same "random" number

    srand(time(NULL)); // setting the seed
    // time(0) and time(NULL) do the same thing --> gets the current time

    printf("%d\n", rand()); // now the seed used in rand() is different -- rand num based on the time
    printf("%d\n", RAND_MAX); // depending on OS and compiler, number can vary --> this is max number that can be given

    // How can we use this to generate pseudo-random numbers?

    srand(time(NULL));

    // int randomNum = rand() % 2; // either get 0 or 1
    // int randomNum = (rand() % 2) + 1; // offset of +1 gives us either 1 or 2 now

    // For greater ranges:
    int min = 50;
    int max = 100;
    
    // int randomNum = (rand() % max) + min; // get values outside the max range
    int randomNum1 = (rand() % (max - min + 1)) + min; // +1 for the offset because with % operator, 0 is possible
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d\n", randomNum1);
    printf("%d\n", randomNum2);
    printf("%d\n", randomNum3);

    return 0;
}

/*
Summary:
    Formula for generating pseudo-random numbers = (rand() % (max - min + 1)) + min;
*/
