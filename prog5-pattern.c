/*print a pattern 11 to 25 without space*/
#include<stdio.h>
void main(){
    int k=11;
    for(int i=1; i<6; i++){
         for(int j=1 ; j<6; j++){
             printf("%2d ",k);
             k++;
         }
         printf("\n");
    }
}