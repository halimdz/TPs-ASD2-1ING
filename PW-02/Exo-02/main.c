#include <stdio.h>
#include <stdlib.h>
/*
int main() {
    char str1[100], str2[100]; // Assuming the input strings won't exceed 100 characters
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Concatenate str2 to str1
    for (i = 0; str1[i] != '\0'; i++) {
        // Move to the end of str1
    }

    for (j = 0; str2[j] != '\0'; j++, i++) {
        str1[i] = str2[j];
    }

    printf("After concatenation: %s\n", str1);
    return 0;
}*/



int main()
{
   char str1[100], str2[100], str3[100]; // Assuming the input strings won't exceed 100 characters
   int i = 0, j = 0;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

	// Insert the first string in the new string
	while (str1[i] != '\0') {
		str3[j] = str1[i];
		i++;
		j++;
	}

	// Insert the second string in the new string
	i = 0;
	while (str2[i] != '\0') {
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';

	// Print the concatenated string
	printf("\nConcatenated string: %s", str3);

	return 0;
}
