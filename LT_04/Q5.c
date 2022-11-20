#include<stdio.h>
int main(){

	float quizMarks;
	float per;


printf("\nEnter Your First Quiz Marks:\t");
scanf("%f", &quizMarks);

per = (quizMarks/5) * 100;


printf("\n\nThe Percentage of First Quiz is: %.2f", per);

	return 0;
}
