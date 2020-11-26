/**
 * C program to calculate sum of digits using recursion
 */
 
#include <stdio.h>

/* Function declaration */
int sumOfDigits(int num);


int main()
{
    int num, sum;
    
    printf("Input number ");
    scanf("%d", &num);
    
    sum = sumOfDigits(num);
    
    printf("Sum of digits  %d",sum);
    
    return 0;
}


/**
 * Recursive function to find sum of digits of a number
 */
int sumOfDigits(int num)
{
    // Base condition
    if(num == 0)
         return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}
