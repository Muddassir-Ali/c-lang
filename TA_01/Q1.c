#include<stdio.h>
int main(){
	
	int num,originalNum,remainder,result = 0;
	
	printf("INPUT NUMBER BASIS ON 3 Digits:\t");
	scanf("%d", &num);
	
	if(num > 99 && num <= 999){
	
	}
	else{
		printf("ERROR! YOUR NUMBER MUST BE 3 DIGITS");
		return;
	}
	
	
	originalNum = num;
	
	while(originalNum!=0){
		remainder = originalNum%10;
		result = result+(remainder*remainder*remainder);
		originalNum=originalNum/10;	
	}
	if(result == num){
		printf("\n\n%d is an ArmStrong Number", num);
	}
	else{
		printf("\n\n%d is not an ArmStrong Number", num);
	}

	return 0;
} 
