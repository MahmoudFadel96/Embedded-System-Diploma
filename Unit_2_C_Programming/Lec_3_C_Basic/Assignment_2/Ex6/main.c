/*
 *  main.c
 *
 *  Created on  : May 8, 2022
 *  Author      : Mahmoud Fadel
 *  Description : Calculate Sum of Natural Numbers
 *
 */

#include"stdio.h"
void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num ,i=1,sum=0;
	printf("Enter a Number : ");
	scanf("%i",&Num);
	for(i;i<=Num;i++)
		sum+=i;
	printf("Sum is %i",sum);

}
