 #include<stdio.h> 
int main(void){
	char choice;
	long int decimalNumber,remainder,quotient;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	int n, k, o, ocno=0,dn;
	int num, bin = 0, rem = 0, place = 1;
	 
	printf("To Convert into Hexadecimal Enter 'H':\t");
	printf("\nTo Convert into Octal Enter 'O':\t");
	printf("\nTo Convert into Binary Enter 'B':\t");
	printf("\nTo Exit Enter 'E':\t");
    printf("\n\nEnter your choice: ");
    scanf("%c", &choice);
    if(choice == 'H'){
	printf("\nEnter any decimal number: ");
	scanf("%ld",&decimalNumber);
	quotient = decimalNumber;
	while(quotient!=0) {
		temp = quotient % 16;
		if( temp < 10)
		temp =temp + 48; else
		temp = temp + 55;
		hexadecimalNumber[i++]= temp;
		quotient = quotient / 16;
	}
	printf("\nEquivalent hexadecimal value of decimal number %d: ",decimalNumber);
	for (j = i -1 ;j> 0;j--)
	printf("%c",hexadecimalNumber[j]);
	}
	if(choice == 'O'){	
    printf("Enter any Decimal Number: ");
    scanf("%d",&n);
    dn=n;
    k=1;
    for(o=n;o>0;o=o/8)
       {
        ocno=ocno+(o % 8)*k;
        k=k*10;
        n=n/8;
    }
    printf("\nThe Octal of %d is %d.\n\n",dn,ocno);	
}
	if(choice == 'B'){
	printf("\nEnter any decimal number: ");
	scanf("%ld",&num);
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("%d:", bin); 
}
	return 0;
}
