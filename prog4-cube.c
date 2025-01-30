/*Write a C program to find cube of each elements of an 1D array using Pointer.*/
#include <stdio.h>
void main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr=arr;
    printf("Enter elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }
    printf("Cubes of elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d^3 = %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }
}
