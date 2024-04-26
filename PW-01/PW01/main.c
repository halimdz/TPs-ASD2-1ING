#include <stdio.h>
#include <stdlib.h>

int main() {
   int variable = 10;
   int *ptr = &variable;
   printf("Value of variable: %d\n",variable);
   printf("Address of variable: %p\n", (void*)&variable);
   printf("Value using pointer: %d\n", *ptr);
   printf("Address stored in pointer: %p\n", (void*)ptr);
   *ptr = 20; // Modifier la valeur de la variable via le pointeur
   printf("Modified value using pointer: %d\n",variable);
return 0;
}
