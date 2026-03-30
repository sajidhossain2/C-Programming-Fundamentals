#include <stdio.h>

    void main ()

{
    int num1, num2, add, mult, div, mod;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter another integer: ");
    scanf("%d", &num2);

    add= num1+num2;
    mult= num1*num2;
    div=num1/num2;
    mod=num1%num2;

    printf("%d Plus %d Equals %d\n", num1, num2, add);
    printf("The result of multiplication is: %d\n", mult);
    printf("The result of the division is: %d\n", div);
    printf("%d mod %d = %d\n", num1, num2, mod);
}
