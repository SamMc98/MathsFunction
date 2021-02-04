/*Creating a simple maths program to add, subtract, multiply and divide*/

#include <stdio.h>
int main() 
{
int num1 = 10, num2 = 5;
int sum, sub, mult, mod;
float div, avg;

//find average of two numbers

//Read two numbers seperated by commas:
printf("Input any two numbers separated by a comma: ");
scanf("%d,%d", &num1, &num2);

//Performs all arithmetic operations:
sum = num1 + num2;
sub = num1 - num2;
mult = num1 * num2;
div = (float)num1 / num2;
mod = num1 % num2;

//Calculates average of two numbers so long as they are between 1 and 5
if (num1 < 6 && num1 > 0 && num2 < 6 && num2 > 0){
avg = (float)(num1+num2)/2;
printf("\nThe average : %f\n", avg);
} else {
printf("\nThe given number must be between 1 and 5 to calculate the average.\n");
}

//Prints all results of the arithmetic operations:
printf("The sum of the given numbers : %d\n", sum);
printf("The difference of the given numbers : %d\n", sub);
printf("The product of the given numbers : %d\n", mult);
printf("The quotient of the given numbers : %f\n", div);
printf("MODULUS = %d\n", mod);


return 0;
}