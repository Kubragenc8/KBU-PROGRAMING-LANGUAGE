#include <stdio.h>

int main(){
    
    int radius, operation_type;
    float perimeter, area;
    
    printf("radius: ");
    scanf("%d", &radius);
    
    printf("operation_type: ");
    scanf("%d", &operation_type);
    
    if (operation_type == 1){
        perimeter = 2 * 3.14 * radius;
        printf("perimeter = %f", perimeter);
    }
    else if (operation_type == 2){
        area = 3.14 * radius * radius;
        printf("area = %f", area);
    }  
    else {
        printf("wrong input");
    }
} 