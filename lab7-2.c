#include <stdio.h>

int main(){
       int A, B, temp;
       printf("enter A");
       scanf("%d", &A);
       
       printf("enter B");
       scanf("%d", &B);
       
       temp = A;
       A = B;
       B = temp;
       printf("A: %d B: %d",A,B);
       return 0;
}