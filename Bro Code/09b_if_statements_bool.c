# include <stdio.h>
# include <stdbool.h>

int main() {

    bool isStudent = true;
    
    /*
    if (isStudent == true) {
        printf("You are a student!\n");
    } else {
        printf("You are NOT a student.\n");
    }
    */
    
    if (isStudent) { // when working with boolean vaules, you can just check it because it's either True or False
        printf("You are a student!\n");
    } else {
        printf("You are NOT a student.\n");
    }

    return 0;
}
