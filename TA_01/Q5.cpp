#include<stdio.h>
int main(){
	int choice,swap1,swap2;
	int n,sum=0,m; 
	int num,originalNum,remainder,result = 0;
	int a, b = 0;
	
	printf("****MENU****\n");
	
	printf("Enter 1 for Armstrong\n");
	printf("Enter 2 for Digit Sum\n");
	printf("Enter 3 for Swap Number\n");
	printf("Enter 4 for Reverse Number\n\n");
	
	printf("Enter Your Choice:\t");
	scanf("%d" , &choice);
	
	printf("\n****************************");
	
	if(choice == 1){
		printf("\n\nEnter Number:\t");
		scanf("%d", &num);
		
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
}

	if(choice == 2){
		printf("\n\nEnter Number:\t");
		scanf("%d", &n);   
	while(n>0)    
	{    
		m=n%10;    
		sum=sum+m;    
	n=n/10;    
	}    
		printf("Sum is=%d",sum);    
 
}	

	if(choice == 3){
		printf("\nEnter a Number:\t");
		scanf("%d" , &swap1);
		printf("Enter another Number:\t");
		scanf("%d" , &swap2);
		printf("\nBefore Swipping First Number is:%d" , swap1);
		printf("\nBefore Swipping Second Number is:%d" , swap2);
		printf("\n\nAfter Swipping First Number is:%d" , swap2);
		printf("\nAfter Swipping Second Number is:%d" , swap1);	
}

	if(choice == 4){
  printf("\nEnter a number to reverse:\t");
  scanf("%d", &a);

  while (a != 0)
  {
    b = b * 10;
    b = b + a%10;
    a = a/10;
  }
  printf("\n\nReverse of the number: %d", b);	
}

return 0;
} 
 


