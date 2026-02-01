#include <stdio.h>

int main(){
    // variable = A reusable container for a value.
    // Behaves as if it were the value it contains
    // \n
    


// Integers
    int age = 25;
    int year = 2026;
    printf("You are %d years old \n", age);
    printf("The year is %d \n", year);

// Floats
    float gpa = 3.2;
    float price = 19.99;
    float temperature = -10.1;
    printf("Your grade point average is %f\n", gpa);
    printf("The price is $%f\n", price); //Two digits after the decimal .2f
    printf("The temperature is %f°F\n", temperature);
    printf("The temperature is %.2f°F \n", temperature);
// Doubles "long floats"
    double pi = 3.14159265359;
    double e = 2.71828182845;
    printf("The value of pi is %.15lf \n",pi);
    printf("The value of e is %.5lf \n",e);

// Char 
// ONLY HOLDS ONE CHARACTER!

    char grade = 'A'; //Must be single quotes
    printf("Your grade is %c \n",grade);



// Char
// Strings

    char schoolname[] = "Florida Agricultural & Mechanical"; //Must be withing double quotes
    char major[] = "Computer Science";

    printf("I plan on studying %s at %s University", major, schoolname);

    return 0;
}

