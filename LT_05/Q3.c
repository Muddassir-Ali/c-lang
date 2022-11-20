#include<stdio.h>
int main()
{
	int num1,num2;

	printf("Please! Enter First Number: ");
	scanf("%d", &num1);

	printf("Please! Enter Second Number: ");
	scanf("%d", &num2);

	if(num1%2==0 && num2%2==0){
		printf("You have Entered Two Even Number.");
	}
	else if(num1%2!=0 && num2%2!=0){
		printf("You have Entered Two Odd Number.");
	}
	else if((num1%2==0 || num2%2!=0)){
		printf("You have entered one even number and one odd number.");
	}
	else if((num1%2!=0 || num2%2==0)){
		printf("You have entered one even number and one odd number.");
	}
	else{
		printf("Invalid Input!");
	}

return 0;
}
