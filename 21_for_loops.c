# include <stdio.h>
# include <windows.h> // includes a sleep function meant for windows
// # include <unistd.h> --> Linux / Mac

int main() {

    // for loop = Repeat some code a limited number of times
    //            for(initalization; condition; update)

    /*
    for (int i = 0; i < 10; i++) { // increments i by 1 after each cycle
        printf("%d\n", i);
    }
    */

    /*
    for (int i = 1; i <= 10; i++) { // If we want to count from 1 to 10
        printf("%d\n", i);
    }
    */
    
    /*
    for (int i = 1; i <= 100; i++) { // If we want to count from 1 to 100
        printf("%d\n", i);
    }
    */

    /*
    for (int i = 0; i <= 10; i += 2) { // we can count by more than just 1
        printf("%d\n", i);
    }
    */

    /*
    for (int i = 10; i >= 0; i -= 3) { // we can also decrement instead of increasing
        printf("%d\n", i);
    }
    */

// New Year Counter

    for (int i = 10; i >= 0; i--) {
        Sleep(1000); // windows = Sleep(miliseconds); linux/mac = sleep(seconds)
        printf("%d\n", i);
    }

    printf("Happy New Year!\n");

    return 0;
}

/*
Summary:
    for-loops are better when you want to do something a certain or limited amount of times
*/