# include <stdio.h>
# include <stdbool.h>

bool ageCheck(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false; // not needed but good for readability
    }
}

int main() {

    int age = 0;

    printf("Officer: What is your age? ");
    scanf("%d", &age);

    if (ageCheck(age)) {
        printf("You can go vote!\n");
    } else {
        printf("Get out of here!\n");
    }

    return 0;
}

