#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (i = 0; i < size; i++)
       printf("%d ", arr[i]);
    for (i = 0; i < size / 2; i++) {
// Swap elements at i and size - 1 - i
         int temp = arr[i];
         arr[i] = arr[size - 1 - i];
         arr[size - 1 - i] = temp;
    }
    printf("\nReversed array: ");
    for (i = 0; i < size; i++)
       printf("%d ", arr[i]);

return 0;
}
