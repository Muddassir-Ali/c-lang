#include<stdio.h>
int main()
{
    int arr[10] = {116,15,22,14,45,31,20,54,38,40};
    int Max = arr[0];
    int Min = arr[0];
    int i;
    for(i = 1; i < 10; i++)
    {
        if(Max < arr[i])
            Max = arr[i];
        if(Min > arr[i])
           Min = arr[i];
    }
    printf("\n The Max Number is: %d\n", Max);
    printf("\n The Min Number is: %d\n\n", Min);

    return 0;
}
