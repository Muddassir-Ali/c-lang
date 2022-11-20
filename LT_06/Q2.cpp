#include<stdio.h>

int main(){
	float calories = 3.9;
    int i;
    
    for(i=1; i<7; i++){
    	printf("Calories Burned after %d minutes %.2f\n",i*5,calories*(5*i));
	}	
	return 0;
	
}

