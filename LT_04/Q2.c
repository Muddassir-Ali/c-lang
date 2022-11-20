#include<stdio.h>
int main()
{
    int x, y, z, sum;

    printf("Enter Three Number: \n");

    scanf("%d %d %d", &x, &y, &z);

    sum = x + y + z;

    printf("The Sum of Three Numbers is: %d", sum);

    return 0;
}
