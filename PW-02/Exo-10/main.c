#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string to rotate it left: ");
    scanf("%s", str);
    int i, len = strlen(str);
    char firstChar = str[0];
    for (i = 0; i < len - 1; i++) {
        str[i] = str[i + 1];
    }

    str[len - 1] = firstChar;

    printf("String after left rotation: %s\n", str);
    return 0;
}
