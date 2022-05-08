/*
 * main.c
 *
 *  Created on: May 8, 2022
 *  Author: Mahmoud Fadel
 *  Description : Check wether Number is even or odd
 *
 */


#include"stdio.h"
void main(){

	int Num=0;
	printf("Enter an integer you want to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%i",&Num);
	if(Num % 2 == 0)
		printf("%i is even",Num);
	else
		printf("%i is odd",Num);
}
