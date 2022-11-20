#include<stdio.h>
int main(){
	int a, b = 0;

  printf("Enter a number to reverse:\t");
  scanf("%d", &a);

  while (a != 0)
  {
    b = b * 10;
    b = b + a%10;
    a = a/10;
  }

  printf("\n\nReverse of the number: %d", b);

	return 0;
} 
