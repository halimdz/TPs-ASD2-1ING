#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// A function that takes two strings as parameters and returns a new string that is their concatenation
char *concatenate(char *str1, char *str2) {
  // Get the lengths of the strings
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  // Allocate memory for the new string, adding one extra byte for the null terminator

  char* result = malloc(len1+len2+1);

  // Copy the first string to the result using a pointer
  char *p = result; // A pointer to the current position in the result
  while (*str1 != '\0') {
    *p = *str1; // Copy the character from str1 to p
    p++; // Increment the pointer
    str1++; // Move to the next character in str1
  }

  // Copy the second string to the result using a pointer
  while (*str2 != '\0') {
    *p = *str2; // Copy the character from str2 to p
    p++; // Increment the pointer
    str2++; // Move to the next character in str2
  }

  // Add the null terminator to the end of the result
  *p = '\0';

  // Return the result
  return result;
}

// A main function to test the concatenate function
int main() {
  // Declare and initialize some strings
  char *s1 = "Hello";
  char *s2 = "World";
  char *result;

  // Call the concatenate function and print the result
  result = concatenate(s1, s2);

  if (result != NULL) {
    printf("%s + %s = %s\n", s1, s2, result);

  }
  free(result);
  // Return 0 to indicate success
  return 0;
}
