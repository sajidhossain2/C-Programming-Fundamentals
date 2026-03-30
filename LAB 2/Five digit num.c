#include<stdio.h>

    int main ()
{
    int num, first_digit, last_digit, sum;

    printf("Enter a five digit number: ");
    scanf("%d", &num);

    last_digit = num%10;
    first_digit = num/10000;

    sum = last_digit+first_digit;

    printf("The Sum of First and last digit is: %d\n", sum);

}
