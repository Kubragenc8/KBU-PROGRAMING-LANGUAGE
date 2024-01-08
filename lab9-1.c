#include <stdio.h>

int main (){

    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A>B && A>C){
        printf ("A: %d", A);
    }
    else if (B>A && B>C){
        printf ("B: %d", B);
    }
    else {
        printf ("C: %d", C);
    }
    return 0;
}