/*
 *  main.c
 *
 *  Created on  : May 8, 2022
 *  Author      : Mahmoud Fadel
 *  Description : Find Factorial of Number
 *
 */

#include"stdio.h"
void main(){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int Num=0,result=1,i=0;
	printf("Enter a Number : ");
	scanf("%i",&Num);
	if (Num>0){
		for(i=Num ; i>0 ; i--){
			result *= i;
		}
		printf("Factorial of %i = %i",Num,result);
	}
	else if(Num<0)
		printf("Error!!! Factorial of negative numbers does't exist");
	else
		printf("Factorial of Zero = 1");
}
