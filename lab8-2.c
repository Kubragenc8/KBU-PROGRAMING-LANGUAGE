#include <stdio.h>

int main() {
    float temperature;
    
    printf("Enter the temperature in degrees Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("The temperature is below freezing point.\n");
    } else if (temperature == 0) {
        printf("The temperature is at the freezing point.\n");
    } else {
        printf("The temperature is above freezing point.\n");
    }

    return 0;
}