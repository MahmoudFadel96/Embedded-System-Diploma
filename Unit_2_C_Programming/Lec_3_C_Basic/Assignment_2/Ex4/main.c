/*
 * main.c
 *
 *  Created on  : May 8, 2022
 *  Author      : Mahmoud Fadel
 *  Description : Check Number is positive or Negative
 *
 */

#include"stdio.h"
void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float Num;
	printf("Enter a Number : ");
	scanf("%f",&Num);
	if (Num>0)
		printf("%f is Positive Number",Num);
	else if (Num<0)
		printf("%f is Negative Number",Num);
	else
		printf("You Entered Zero");

}
