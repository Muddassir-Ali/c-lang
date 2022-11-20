#include<stdio.h>
int main()
{
    int letter;
    printf("Please Enter Your Alphabet: ");
    scanf("%c", &letter);
    if(letter >= 'A' && letter <= 'Z')
    {
        printf("This is Capital Letter");
    }
    else if(letter >= 'a' && letter <= 'z')
    {
        printf("This is Small Letter");
    }
    else
    {
        printf("This is Not an Alphabet Character");
    }
}
