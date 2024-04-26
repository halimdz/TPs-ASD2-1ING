#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    // store the value of x in a temporary variable
    int temp = *x;
    // assign the value of y to x
    *x = *y;
    // assign the value of temp to y
    *y = temp;
}

int main() {
    // declare and initialize two variables
    int a = 10, b = 20;
    // print their values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // call the swap function with their addresses
    swap(&a, &b);
    // print their values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}


