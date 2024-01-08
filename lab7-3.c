#include <stdio.h>

int main(){
       int stnumber, midterm, final;
       float last;
       printf("stnumber: ");
       scanf("%d", &stnumber);
       
       printf("midterm: ");
       scanf("%d", &midterm);
       
       printf("final: ");
       scanf("%d", &final);
       
       last = (midterm * 0.4)+ (final * 0.6);
       printf("stnumber = %d last = %f",stnumber, last);
       return 0;
}