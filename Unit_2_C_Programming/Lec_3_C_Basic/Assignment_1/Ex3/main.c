/*
 * main.c
 *
 *  Created on: May 7, 2022
 *  Author: Mahmoud Fadel
 */

#include"stdio.h"
void main(){
	int Num1=0,Num2=0,Sum=0;
	printf("Enter Two Integers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&Num1,&Num2);
	printf("Sum is : %d", Num1+Num2);
}
