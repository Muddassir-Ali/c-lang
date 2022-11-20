#include<stdio.h>
int main()
{
    char opt;
    int num1, num2;
    float res;
    printf("Select an Operator (+, -, *, /) to perform an operation in C Calculator \n ");
    scanf("%c", &opt);
    printf(" Enter the First Number: ");
    scanf(" %d", &num1);
    printf(" Enter the Second Number: ");
    scanf(" %d", &num2);

    if(opt == '+')
    {
        res = num1 + num2;
        printf(" Addition of %d and %d is: %f", num1, num2, res);
    }
    else if(opt == '-')
    {
        res = num1 - num2;
        printf(" Subtraction of %d and %d is: %f", num1, num2, res);
    }
    else if(opt == '*')
    {
        res = num1 * num2;
        printf(" Multiplication of %d and %d is: %f", num1, num2, res);
    }
    else if(opt == '/')
    {
        if(num2 == 0)
        {
            printf(" \n Divisor Cannot be Zero. Please enter another value");
            scanf("%d", &num2);
        }
        res = num1 / num2;
        printf(" Division of %d and %d is: %.2f", num1, num2, res);
    }
    else
    {
        printf(" \n You Have Entered Wrong Inputs");
    }
    return 0;
}
