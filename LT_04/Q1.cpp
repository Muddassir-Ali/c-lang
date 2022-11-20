#include<stdio.h>
int main(){

	float dis;
	float time;
	float d;
	float t;

printf("Please Enter Distance in KM:\t");
scanf("%f", &dis);


d = dis * 1000;

printf("Please Enter Time in Hours:\t");
scanf("%f", &time);

t = (time * 60) * 60;

printf("\n\n%.2fm/s", d/t);

	return 0;
}
