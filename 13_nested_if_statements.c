# include <stdio.h>
# include <stdbool.h>

int main() {

    float price = 10.00;
    bool isStudent = true; // 10% discount if true
    bool isSenior = true; // 20% discount

    // student = 90% of price ($9)
    // senior = 80% of price ($8)
    // both = 70% of price ($7)

    if (isStudent) {
        if (isSenior) {
            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7;
        } else {
            printf("You get a student discount of 10%%\n");
            price *= 0.9;
        }
    } else {
        if (isSenior) {
            printf("You get a senior discount of 20%%\n");
            price *= 0.8;
        }
    }

    printf("The price of a ticket is $%.2f\n", price);
    // Can make the if statments more efficient with &&

    return 0;
}