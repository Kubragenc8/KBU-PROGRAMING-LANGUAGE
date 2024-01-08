#include <stdio.h>

int main(){
    int factorial= 1;
    int i=1;
    int N;
    
    scanf("%d",&N);
    
    for(int i=1 ; i<= N ; i++){
        factorial = factorial * i;
    }
    printf("%d",factorial);
    return 0;
}