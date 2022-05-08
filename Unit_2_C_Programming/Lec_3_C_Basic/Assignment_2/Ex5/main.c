/*
 *  main.c
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

	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
		printf("%c is character",ch);
	else
		printf("%c is not character",ch);

}
