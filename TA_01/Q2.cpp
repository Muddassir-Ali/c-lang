#include<stdio.h>
int main(){
	
	int num1,num2,num3,num4,sum;
	
	printf("Input a 1st Number:\t");
	scanf("%d", &num1);
	
	printf("Input a 2nd Number:\t");
	scanf("%d", &num2 );
	
	printf("Input a 3rd Number:\t");
	scanf("%d", &num3 );
	
	printf("Input a 4th Number:\t");
	scanf("%d", &num4 );
	
	sum = num1+num2+num3+num4;
	
	if (sum%2==0){
		printf("The Square of the sum of 4 Numbers is:%d", sum*sum);
	}
	else{
		printf("The Cube of the sum of 4 Numbers is:%d", sum*sum*sum);
	}
	return 0;
} 
