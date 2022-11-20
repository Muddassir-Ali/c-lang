#include<stdio.h>
int main()
{
    char a[50],b,c,d;
    int x,y,z,flag = 0;
    printf("\n Please Enter The Email-ID Of The User: \n ");
    gets (a);
    x = strlen(a);
    for(y = 0; y < x; y++)
    {
        b = a[y];
        if(b=='@')
        {
            flag =1;
        }
    }

    if(flag == 1)
    {
        printf("\n Email-ID is Valid");
    }
    else
    {
        printf("\n Email-ID is In-Valid");
    }
}
