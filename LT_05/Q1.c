#include<stdio.h>
int main()
{
    int year;
    int present_year = 2022;
    printf("Please Enter Your Year: ");
    scanf("%d", &year);
    if (year%4 == 0)
    {
        printf("You were born in a leap year");
    }
    else if(year<=2022 && year%4!=0)
    {
        present_year = present_year-year;
        printf("Your age is: %d", present_year);
    }
    else if(year>2022 || year%4!=0)
    {
        printf("We cannot tell you the age because its above than current year\n But its not a leap year");
    }
    return 0;


}
