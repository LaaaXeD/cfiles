#include <stdio.h>

// \n
/*Format Specifier	Type
    %c	Character
    %d	Signed integer
    %e or %E	Scientific notation of floats
    %f	Float values
    %g or %G	Similar as %e or %E
    %hi	Signed integer (short)
    %hu	Unsigned Integer (short)
    %i	Unsigned integer
    %l or %ld or %li	Long
    %lf	Double
    %Lf	Long double
    %lu	Unsigned int or unsigned long
    %lli or %lld	Long long
    %llu	Unsigned long long
    %o	Octal representation
    %p	Pointer
    %s	String
    %u	Unsigned int
    %x or %X	Hexadecimal representation
*/

int main(){
float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%.2f\n", price1);
printf("%f\n", price2);
printf("%f\n", price3);

return 0;
};


// Width
int width(){

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    /*  Adding a POSITIVE number before the format specifier will add space AFTER YOUR VARIABLE
     printf("%3d\n", num1);

     Adding a NEGATIVE number before the format specifier will add space AFTER YOUR VARIABLE
     printf("%-4d\n", num1); 

     Leading numbers will display before the variable if this happens
     printf("%03d\n", num1);

    You can also display if a number is positive or negative
    printf("%+d\n", num1);
    
    We can change the number of decimals displayed for float values it will round the number as well
    printf("%.2f\n", price1);

    
    */
    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    return 0;
};

// Precision
void precision(void){
float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;

printf("%f\n", price1);
printf("%f\n", price2);
printf("%f\n", price3);

};




/* 

General Format Specifier Example

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[]= "Lamar";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c \n", currency);
    printf("%s\n", name);

    width(void);
    precision(void);
    return 0;
 */
