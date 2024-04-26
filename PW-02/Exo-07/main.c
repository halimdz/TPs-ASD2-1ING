#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];
    int choice = -1,i;

    printf("Program to convert string into Uppercase or Lowercase:\n1. Lowercase\n2. Uppercase \n3. Exit");

    printf("\nEnter a string : ");
    gets(s);
    while(1){
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        // If-else ladder
        if(choice == 1){
            for (i = 0; s[i]!='\0'; i++) {
               if(s[i] >= 'A' && s[i] <= 'Z') {
                  s[i] = s[i] + 32;
               }
        }
            printf("\nString in Lower Case : %s", s);
        }
        else if (choice == 2){
            for (i = 0; s[i]!='\0'; i++) {
                 if(s[i] >= 'a' && s[i] <= 'z') {
                     s[i] = s[i] - 32;
                 }
            }
           printf("\nString in Upper Case = %s", s);
        }
        else if (choice == 3){
            printf("Good Lack\n");
            break;
        }
        else{
            printf("> Invalid Input\n");
        }
    }
    return 0;
}










