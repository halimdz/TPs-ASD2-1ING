#include <stdio.h>
#include <stdlib.h>
/*
void DisplayRev (char s[]) {
 int i,size = 0;
 while (s[size] != '\0')
        size++;

 for ( i = size - 1; i >= 0; i--)
        printf("%c", s[i]);
}
int main() {
    char inputString[1000]; // Assume that the input string does not exceed 1000 characters
    int length = 0;
    do{
    printf("Enter a sequence of characters (end with a dot):\n");
    scanf("%s", inputString); // Read the string until encountering a dot
    // Calculate chain length
    while (inputString[length] != '\0')
        length++;
    }while(inputString[length-1]!='.');
    // Show characters in reverse order (including dot)
    DisplayRev (inputString);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
void DisplayRev (char s[]) {
 int i,j,size = 0;
 char temp[1];
 while (s[size] != '\0')
        size++;

 j=size-1;

    for(i = 0; i < size/2; i++) {
        temp[0] = s[i];
        s[i] = s[j-i];
        s[j-i] = temp[0];
    }


    for(i = 0; i < size; i++) {
        printf("%c",s[i]);

    }
}
int main() {
    char inputString[100]; // Assume that the input string does not exceed 100 characters
    printf("Enter a string:\n");
    scanf("%s", inputString);
    //gets(inputString);
    printf("Reversed string: ");
    DisplayRev(inputString);


    return 0;
}
