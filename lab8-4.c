#include <stdio.h>

int main() {
    float feet, centimeters;

    printf("Enter the length in feet: ");
    scanf("%f", &feet);

    centimeters = feet * 30.48;

    printf("%.2f feet is equal to %.2f centimeters\n", feet, centimeters);

    return 0;
}
