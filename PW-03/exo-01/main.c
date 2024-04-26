#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
   int arr[] = {1, 2, 3, 4, 5};
   int size = sizeof(arr) / sizeof(arr[0]);
   int sum = 0;
   for (i = 0; i < size; i++) {
        sum += arr[i];}
   printf("Sum of elements: %d\n", sum);

return 0;
}
