#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    char s[100]; // Assuming the input string won't exceed 100 characters
    printf("Enter a string: ");
    scanf("%s",&s);

    // Calculate the length of the string
   for (i = 0; s[i] != '\0'; i++);
   printf("Length of the string [%s] is: %d\n",s,i);
   return 0;
}

