#include<stdio.h>
int main(){

	float radius;
	float vol;


printf("\nEnter Radius of Sphere:\t");
scanf("%f", &radius);

vol = (4.0/3.0 * 3.142 )* radius * radius * radius;

printf("\n\nThe Volume of Sphere is: %.2f", vol );

	return 0;
}

