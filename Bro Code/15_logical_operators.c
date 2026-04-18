# include <stdio.h>
# include <stdbool.h>

int main() {

    int temp = 1000000000;

    /* 
    if (temp > 0) {
        printf("The temperature is GOOD\n");
    } else if (temp < 30) {
        printf("The temperature is GOOD\n");
    } else {
        printf("The temperature is BAD\n");
    }
    */

// AND Operator: &&

    if (temp > 0 && temp < 30) { // && = AND operator --> if BOTH true then true, else false
        printf("The temperature is GOOD\n");
    } else {
        printf("The temperature is BAD\n");
    }

// OR Operator: ||

    if (temp <= 0 || temp >= 30) {  // || = OR operator --> only one true == true
        printf("The temperature is BAD\n");
    } else {
        printf("The temperature is GOOD\n");
    }
    
// NOT Operator: !

    bool isSunny = false;

    if (isSunny) {
        printf("It is SUNNY outside\n");
    } else {
        printf("It is CLOUDY outside\n");
    }

    if (!isSunny) { // ! = opposite/NOT --> if true then false, if false then true
        printf("It is CLOUDY outside\n");
    } else {
        printf("It is SUNNY outside\n");
    }

    return 0;
}

/*
Summary:
    AND:    &&
    OR:     ||
    NOT:    !
*/
