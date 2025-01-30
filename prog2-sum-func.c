/*Write a C program to find the sum of elements in an array using a function.*/
#include<stdio.h>
int passArray(int arr[], int size);

int main(){
    int n;

    printf("enter the array size:");
    scanf("%d",&n);

    int arr[n];
    printf("enter array elements:\n");
    for(int i = 0 ; i < n ; i++){
        printf("array[%d] :",i);
        scanf("%d",&arr[i]);
    }
    int sum =  passArray(arr, n);
   
    printf("The sum of an array is: %d",sum);
    return 0;
}
int passArray(int arr[], int size){
    int sum = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        sum = sum + arr[i];
    }
    printf("\n");
    return sum ; 
}