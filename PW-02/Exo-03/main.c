#include <stdio.h>
#include <stdlib.h>


int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result, i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = 0; // Strings are not equal
            break;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
         result = 1; // Strings are equal
    else
         result = 0; // Strings are not equal

    if (result == 1)
        printf("The strings are identical.\n");
    else
        printf("The strings are not identical.\n");


    return 0;
}
