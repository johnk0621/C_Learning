# include <stdio.h>

int main() {

    // break = Break out of a loop (STOP) --> also used in switch statements!
    // continue = Skip the current cycle of a loop (SKIP)

    for (int i = 1; i <= 10; i++) {
        if (i == 4) {
            // break; // once i == 4, it breaks out of the loop --> only 1 2 3 print
            continue; // once i == 4, skip current cycle (everything below isn't done) --> no 4 print
        }
        printf("%d\n", i);
    }

    return 0;
}
