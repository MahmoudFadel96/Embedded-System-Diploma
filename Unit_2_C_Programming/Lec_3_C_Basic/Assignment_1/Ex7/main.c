/*
 * main.c
 *
 *  Created on: May 7, 2022
 *  Author: Mahmoud Fadel
 */

#include"stdio.h"
void main(){

	int a=0,b=0;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;

	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d\n",b);

}
