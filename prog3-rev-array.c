#include <stdio.h>
void revSum(int arr[], int n) {
    int sum = 0;
    printf("Reverse array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
        sum =sum+ arr[i];
    }
    printf("\nSum of elements: %d\n", sum);
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter  elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    revSum(arr, n);
    
    return 0;
}
