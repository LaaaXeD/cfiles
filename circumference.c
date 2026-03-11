boilerplate code for circumference.c


#include <stdio.h>
#define PI 3.14159

int main() {
    const double PI = 3.14159; // Define a constant for pi
    double radius;
    const double circumference = 2 * PI * radius; // Calculate the circumference using the formula C = 2 * π * r
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    printf("The circumference of a circle with radius %.2f is: %.2f\n", radius, circumference);

    return 0;
}

