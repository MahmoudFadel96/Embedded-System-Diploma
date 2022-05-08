/*
 *  main.c
 *
 *  Created on  : May 8, 2022
 *  Author      : Mahmoud Fadel
 *  Description : Make Simple Calculator (Add,Subtract,Multiply,Divide) Using Switch Case
 *
 */

#include"stdio.h"
void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float Num1=0,Num2=0;
	char op;
	printf("Enter Operator : ");
	scanf("%c",&op);
	printf("Enter First Number : ");
	scanf("%f",&Num1);
	printf("Enter Second Number : ");
	scanf("%f",&Num2);
	switch(op){
	case '+': printf("Sum of %f + %f = %f",Num1,Num2,Num1+Num2);
	break;
	case '-': printf("Subtraction of %f - %f = %f",Num1,Num2,Num1-Num2);
	break;
	case '*': printf("Multiplication of %f * %f = %f",Num1,Num2,Num1*Num2);
	break;
	case '/': printf("Division of %f / %f = %f",Num1,Num2,Num1/Num2);
	break;
	default : printf("Wrong Operation");
	break;
	}
}
