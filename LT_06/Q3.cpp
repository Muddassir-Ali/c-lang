#include<stdio.h>
int main()
{

  int amount,bill,withdraw;
    
   printf("enter bill: ");
   scanf("%d", &bill);
   printf("enter amount: ");
   scanf("%d", &amount);
   withdraw=amount-bill;
   
   printf("\n1000 = %d", withdraw/1000);
   withdraw=withdraw%1000;
   printf("\n500 = %d", withdraw/500);
   withdraw=withdraw%500;
   printf("\n100 = %d", withdraw/100);
   withdraw=withdraw%100;
   printf("\n100 = %d", withdraw/100);
   withdraw=withdraw%100;
   printf("\n50 = %d", withdraw/50);
   withdraw=withdraw%50;
   printf("\n20 = %d", withdraw/20);
   withdraw=withdraw%20;
   printf("\n10 = %d", withdraw/10);
   withdraw=withdraw%10;
   printf("\n5 = %d", withdraw/5);
   withdraw=withdraw%5;
   printf("\n2 = %d", withdraw/2);
   withdraw=withdraw%2;
   printf("\n1 = %d", withdraw/1);
   withdraw=withdraw%1;
   
   return 0;
}

