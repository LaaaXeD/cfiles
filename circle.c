#include <stdio.h>
#include <math.h>


int main() {
    const double PI = 3.14159; // Define a constant for pi
    double radius;   // Variable to store the radius of the circle
    const double circumference = 2 * PI * radius; // Calculate the circumference using the formula C = 2 * π * r
    
    printf("Enter the radius of the circle: \n");
    scanf("%lf", &radius);

    double area = PI * radius * radius; // Calculate the area using the formula A = π * r^2

    printf("The circumference of a circle with radius %.2f is: %.2f\n", radius, circumference);
    printf("The area of a circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

