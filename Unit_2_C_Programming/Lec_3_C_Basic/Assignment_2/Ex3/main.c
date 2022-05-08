/*
 * main.c
 *
 *  Created on: May 8, 2022
 *  Author: Mahmoud Fadel
 *  Description : Find Largest Number Among 3 Numbers
 *
 */

#include"stdio.h"
void main(){

	float Num1=0,Num2=0,Num3=0;
	printf("Enter 3 Numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&Num1,&Num2,&Num3);
	if(Num1>Num2)
		if(Num1>Num3)
			printf("Largest Number is %f",Num1);
		else
			printf("Largest Numerber is %f",Num3);
	else
		printf("Largest Number is %f",Num2);
}
