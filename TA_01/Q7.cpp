#include <stdio.h>

int main()
{
	int x,y;
	int num1 =0, num2=1;
	int nextnum;
	printf("Enter a Number:\t");
	scanf("%d" , &x);
	printf("\nFibinacci Series: %d, %d, " , num1 , num2);
	nextnum= num1+num2;
	for(int i=3; i<=x; i++){
		printf("%d, " , nextnum);
		num1=num2;
		num2=nextnum;
		nextnum=num1+num2;
	
}

return 0;
}
