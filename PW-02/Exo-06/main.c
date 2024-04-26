#include <stdio.h>
#include <stdlib.h>


// Function to remove spaces from a string
void removeSpaces(char str[]) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Terminate the modified string
}

int main() {
    char inputString[100]; // Assuming the input string won't exceed 100 characters

    printf("Enter a phrase: \n1");
   // scanf("%[^\n]", inputString); // Read the entire line (including spaces)
    gets(inputString);

    removeSpaces(inputString);

    printf("String after removing spaces: %s\n", inputString);
    return 0;
}
