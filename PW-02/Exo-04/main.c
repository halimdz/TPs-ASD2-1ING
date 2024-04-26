#include <stdio.h>
#include <stdlib.h>


// Function to check if the substring is present in the given string
int isSubstring(char mainString[], char subString[]) {
    int i, j;

    for (i = 0; mainString[i] != '\0'; i++) {
        j = 0;
        while (subString[j] != '\0' && mainString[i + j] == subString[j]) {
            j++;
        }
        if (subString[j] == '\0') {
            return 1; // Substring found
        }
    }

    return 0; // Substring not found
}

int main() {
    char mainString[100], subString[100];

    printf("Enter the main string: ");
    //scanf("%s", mainString);
    gets(mainString);

    printf("Enter the sub-string: ");
    //scanf("%s", subString);
    gets(subString);


    if (isSubstring(mainString, subString)) {
        printf("Substring is present in the main string.\n");
    } else {
        printf("Substring is NOT present in the main string.\n");
    }

    return 0;
}
