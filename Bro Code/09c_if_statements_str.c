# include <stdio.h>
# include <string.h>

int main() {

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // \n character techically counts as a character

    if (strlen(name) == 0) {
        printf("You did not enter a name.\n");
    } else {
        printf("Hello, %s!", name);
    }

    return 0;
}
