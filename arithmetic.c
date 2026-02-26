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
    // Initial Values
    int x = 10;
    int y = 3;
    int z = 0;

    // Addition
    z = x + y;

    // printf("%f\n", z);
    
    // Division
    // Remember that if you divide two integers, the result will be an integer. 
    // If you want a float result, at least one of the operands must be a float.
    z = x / y;

    printf("%d \n", z);

    // Modulus
    z = x % y;

    printf("%d \n", z);

    // Increment and Decrement
    x++; // Increment x by 1
    y--; // Decrement y by 1

    // Augmnent Assignment Operators
    x += 5; // Equivalent to x = x + 5
    y *= 2; // Equivalent to y = y * 2
    printf("%d %d\n", x, y);



    return 0;
}