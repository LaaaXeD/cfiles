#include <stdio.h>
/*
    Artimhetic Operators in C
    +  Addition
    -  Subtraction
    *  Multiplication
    /  Division
    %  Modulus (Remainder)
    ++ Increment
    -- Decrement    
    
    
    */
int main(){

int x = 10;
int y = 2;
int z = 0;

z = x + y; // Addition
printf("Addition: %d\n", z);

z = y - x; // Subtraction
printf("Subtraction: %d\n", z);

z = x * y; // Multiplication
printf("Multiplication: %d\n", z);

z = x / y; // Division
// Keep in mind you can't get a decimal if the variables are both integers there will be a problem
// If both variables are converted to floats this will fix the issue
printf("Division: %f\n", z);

// Modulus
z = x % y; 
printf("Modulus: %d\n", z);

// ++ Increment
x++;
printf("Increment: %d\n", x);




}