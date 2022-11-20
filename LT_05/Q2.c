#include<stdio.h>
int main()
{
    int marks;
    printf("Please Enter Your Marks: ");
    scanf("%d", &marks);
    if(marks>=50 && marks<=60)
    {
        printf("Your Grade is D");
    }
    else if(marks>=61 && marks<=70)
    {
        printf("Your Grade is C");
    }
    else if(marks>=71 && marks<=80)
    {
        printf("Your Grade is B");
    }
    else if(marks>=81 && marks<=90)
    {
        printf("Your Grade is A");
    }
    else if(marks>=91 && marks<=100)
    {
        printf("Your Grade is A+");
    }
    else
    {
        printf("Your Number is Invalid");
    }
    return 0;
}
