/*
 * main.c
 *
 *  Created on: May 7, 2022
 *  Author: Mahmoud Fadel
 *
 */

#include"stdio.h"
void main(){
	float Num1=0,Num2=0;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&Num1,&Num2);
	printf("Product: %f ",Num1 * Num2);
}
