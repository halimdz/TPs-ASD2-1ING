#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j;
    int arr[] = {5, 2, 8, 10, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < size; i++)
            printf("arr[%d]=%d|\t", i, arr[i]);

    int max = arr[0];
    for (i = 1; i < size; i++) {
            if (arr[i] > max) {
               max = arr[i];
               j=i;
            }
    }
    printf("\nLargest element is arr[%d]=%d", j, max);
return 0;
}
